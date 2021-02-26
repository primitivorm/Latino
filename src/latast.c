/*
The MIT License (MIT)

Copyright (c) Latino - Lenguaje de Programacion

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
 */

#include "latast.h"
#include "latino.h"
#include "latlex.h"
#include "latmem.h"

int yyparse(ast **root, yyscan_t scanner);
char *analizar_fmt(const char *s, size_t len);

static const char *const nodo_tipo_nombre[] = {
    "NODO_NULO", /* 0 */
    "NODO_VALOR",
    "NODO_MAS_UNARIO",
    "NODO_MENOS_UNARIO",
    "NODO_INC",
    "NODO_DEC", /* 5 */
    "NODO_SUMA",
    "NODO_RESTA",
    "NODO_POTENCIA",
    "NODO_MULTIPLICACION",
    "NODO_DIVISION", /* 10 */
    "NODO_MODULO",
    "NODO_MAYOR_QUE",
    "NODO_MAYOR_IGUAL",
    "NODO_MENOR_QUE",
    "NODO_MENOR_IGUAL", /* 15 */
    "NODO_IGUALDAD",
    "NODO_DESIGUALDAD",
    "NODO_Y",
    "NODO_O",
    "NODO_NO", /* 20 */
    "NODO_IDENTIFICADOR",
    "NODO_BLOQUE",
    "NODO_ASIGNACION",
    "NODO_SI",
    "NODO_ELEGIR", /* 25 */
    "NODO_CASO",
    "NODO_DEFECTO",
    "NODO_CASOS",
    "NODO_MIENTRAS",
    "NODO_REPETIR", /* 30 */
    "NODO_DESDE",
    "NODO_FUNCION_PARAMETROS",
    "NODO_FUNCION_ARGUMENTOS",
    "NODO_FUNCION_LLAMADA",
    "NODO_FUNCION_USUARIO", /* 35 */
    "NODO_RETORNO",
    "NODO_CONCATENAR",
    "NODO_LISTA",
    "NODO_LISTA_ASIGNAR_ELEMENTO",
    "NODO_LISTA_AGREGAR_ELEMENTO", /* 40 */
    "NODO_LISTA_OBTENER_ELEMENTO",
    "NODO_DICCIONARIO",
    "NODO_DICC_AGREGAR_ELEMENTO",
    "NODO_DICC_ELEMENTO",
    "NODO_ATRIBUTO", /* 45 */
    "NODO_GLOBAL",
    "NODO_REGEX",
    "NODO_VAR_ARGS",
    "NODO_LOAD_VAR_ARGS",
    "NODO_ROMPER", /* 50 */
};

const char *latA_nodo_tipo_nombre(int nodo_tipo) {
    return nodo_tipo_nombre[nodo_tipo];
}
ast *latA_crear_nodo() {
    ast *a = (ast *)malloc(sizeof(ast));
    a->tipo = NODO_NULO;
    a->izq = NULL;
    a->der = NULL;
    a->valor = NULL;
    a->nlin = 0;
    a->ncol = 0;
    return a;
}

ast *latA_nodo(nodo_tipo nt, ast *l, ast *r, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = nt;
    a->izq = l;
    a->der = r;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_logico(int b, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_VALOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_LOGICO;
    val->val.logico = b;
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_nulo(void *nulo, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_VALOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_NULO;
    val->val.cadena = nulo;
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_numerico(double d, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_VALOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_NUMERICO;
    val->val.numerico = d;
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_cadena(const char *s, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_VALOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_CADENA;
    val->val.cadena = analizar_fmt(s, strlen(s));
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_literal(const char *s, int nlin, int ncol) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_VALOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_CADENA;
    val->val.cadena = analizar_fmt(s, strlen(s));
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_var(const char *s, int nlin, int ncol, bool esconst) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_IDENTIFICADOR;
    nodo_valor *val = (nodo_valor *)malloc(sizeof(nodo_valor));
    val->tipo = VALOR_CADENA;
    val->val.cadena = strdup(s);
    val->esconst = esconst;
    a->valor = val;
    a->nlin = nlin;
    a->ncol = ncol;
    return a;
}

ast *latA_asign(ast *val, ast *sim) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_ASIGNACION;
    a->izq = val;
    a->der = sim;
    return a;
}

ast *latA_asign_le(ast *exp, ast *id, ast *pos) {
    nodo_lista_elem *a = (nodo_lista_elem *)malloc(sizeof(nodo_lista_elem));
    a->tipo = NODO_LISTA_ASIGNAR_ELEMENTO;
    a->exp = exp;
    a->id = id;
    a->pos = pos;
    return (ast *)a;
}

ast *latA_si(ast *cond, ast *th, ast *el) {
    nodo_si *a = (nodo_si *)malloc(sizeof(nodo_si));
    a->tipo = NODO_SI;
    a->cond = cond;
    a->entonces = th;
    a->_sino = el;
    return (ast *)a;
}

ast *latA_mientras(ast *cond, ast *stmts) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_MIENTRAS;
    a->izq = cond;
    a->der = stmts;
    return a;
}

ast *latA_hacer(ast *cond, ast *stmts) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_REPETIR;
    a->izq = cond;
    a->der = stmts;
    return a;
}

ast *latA_desde(ast *dec, ast *cond, ast *inc, ast *stmts) {
    ast *a = latA_crear_nodo();
    a->tipo = NODO_BLOQUE;
    a->izq = dec;
    a->der = latA_mientras(
        cond, latA_nodo(NODO_BLOQUE, stmts, inc, cond->nlin, cond->ncol));
    return a;
}

ast *latA_funcion(ast *nombre, ast *params, ast *stmts, int nlin, int ncol) {
    nodo_funcion *a = (nodo_funcion *)malloc(sizeof(ast));
    a->tipo = NODO_FUNCION_USUARIO;
    a->nombre = nombre;
    a->params = params;
    a->stmts = stmts;
    a->nlin = nlin;
    a->ncol = ncol;
    return (ast *)a;
}

void latA_destruir(ast *a) {
    if (a) {
        switch (a->tipo) {
            case NODO_SI: {
                nodo_si *nsi = (nodo_si *)a;
                latA_destruir(nsi->cond);
                latA_destruir(nsi->entonces);
                if (nsi->_sino) {
                    latA_destruir(nsi->_sino);
                }
                break;
            }
            case NODO_FUNCION_USUARIO: {
                nodo_funcion *fun = (nodo_funcion *)a;
                if (fun->params) {
                    latA_destruir(fun->params);
                }
                if (fun->stmts) {
                    latA_destruir(fun->stmts);
                }
                latA_destruir(fun->nombre);
                break;
            }
            case NODO_LISTA_ASIGNAR_ELEMENTO: {
                nodo_lista_elem *nelem = (nodo_lista_elem *)a;
                latA_destruir(nelem->exp);
                latA_destruir(nelem->id);
                latA_destruir(nelem->pos);
                break;
            }
            case NODO_IDENTIFICADOR:
            case NODO_VALOR:
                if (a->valor->tipo == VALOR_CADENA) {
                    free(a->valor->val.cadena);
                }
                free(a->valor);
                break;
            default: {
                if (a->izq) {
                    latA_destruir(a->izq);
                }
                if (a->der) {
                    latA_destruir(a->der);
                }
            }
        }
        free(a);
    }
}

void print_spaces(int n_spaces) {
    int i = 0;
    while (i < n_spaces) {
        printf(" ");
        i++;
    }
}

void latA_imprimir(ast *a, int n_spaces) {
    print_spaces(n_spaces);
    if (a) {
        n_spaces++;
        switch (a->tipo) {
            case NODO_NULO:
                printf("`-%sNullNode %s<line: %i, col:%i> %s'NULL'\n", KRED,
                       KYEL, a->nlin, a->ncol, KBLU);
                break;
            case NODO_VALOR: {
                switch (a->valor->tipo) {
                    case VALOR_NULO:
                        printf("`-%sNullLiteral %s<line: %i, col:%i> 'nulo'\n",
                               KMAG, KYEL, a->nlin, a->ncol);
                        break;
                    case VALOR_LOGICO:
                        printf("`-%sBoolLiteral %s<line: %i, col:%i> %s\n",
                               KMAG, KYEL, a->nlin, a->ncol,
                               a->valor->val.logico ? "cierto" : "falso");
                        break;
                    case VALOR_NUMERICO:
                        printf(
                            "`-%sNumericLiteral %s<line: %i, col:%i> %.16g\n",
                            KMAG, KYEL, a->nlin, a->ncol,
                            a->valor->val.numerico);
                        break;
                    case VALOR_CADENA:
                        printf("`-%sStringLiteral %s<line: %i, col:%i> %s'%s'\n",
                               KMAG, KYEL, a->nlin, a->ncol, KCYN,
                               a->valor->val.cadena);
                        break;
                    default:
                        break;
                }
            } break;
            case NODO_MAS_UNARIO:
                printf("`-%sUnaryOperator %s<line: %i, col:%i> %s'+'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MENOS_UNARIO:
                printf("`-%sUnaryOperator %s<line: %i, col:%i> %s'-'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_INC:
                printf("`-%sIncrementDecl %s<line: %i, col:%i> %s'++'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_DEC:
                printf("`-%sDecrementDecl %s<line: %i, col:%i> %s'--'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_SUMA:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'+'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_RESTA:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'-'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_POTENCIA:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'^'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MULTIPLICACION:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'*'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_DIVISION:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'/'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MODULO:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'%'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MAYOR_QUE:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'>'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MAYOR_IGUAL:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'>='\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MENOR_QUE:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'<'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_MENOR_IGUAL:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'<='\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_IGUALDAD:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'=='\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_DESIGUALDAD:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'!='\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_Y:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'&&'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_O:
                printf("`-%sBinaryOperator %s<line: %i, col:%i> %s'||'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_NO:
                printf("`-%sUnaryOperator %s<line: %i, col:%i> %s'!'\n", KBLU,
                       KYEL, a->nlin, a->ncol, KCYN);
                break;
            case NODO_IDENTIFICADOR:
                printf("`-%sIdentifier %s<line: %i, col:%i> %s'%s'\n", KMAG,
                       KYEL, a->nlin, a->ncol, KCYN, a->valor->val.cadena);
                break;
            case NODO_BLOQUE:
                printf("`-%sCompoundStmt %s<line: %i, col:%i>\n", KMAG, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_ASIGNACION:
                printf("|-%sVarDecl\n", KGRN);
                break;
            case NODO_SI:
                printf("`-%sIfStmt %s<line: %i, col:%i>\n", KCYN, KYEL, a->nlin,
                       a->ncol);
                break;
            case NODO_ELEGIR:
                printf("`-%sSwitchStmt %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_CASO:
                printf("`-%sCaseStmt %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_DEFECTO:
                printf("`-%sCaseStmt %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_CASOS:
                printf("`-%sCasesStmts %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_MIENTRAS:
                printf("`-%sWhileStmt %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_REPETIR:
                printf("`-%sDoStmt %s<line: %i, col:%i>\n", KCYN, KYEL, a->nlin,
                       a->ncol);
                break;
            case NODO_DESDE:
                printf("`-%sForStmt %s<line: %i, col:%i>\n", KCYN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_FUNCION_PARAMETROS:
                printf("|-%sParmVarDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_FUNCION_ARGUMENTOS:
                printf("|-%sArgVarDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_FUNCION_LLAMADA:
                printf("|-%sFunCallDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_FUNCION_USUARIO:
                printf("|-%sFunctionDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_RETORNO:
                printf("`-%sReturnStmt %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_CONCATENAR:
                printf("`-%sConcatStmt %s<line: %i, col:%i>\n", KMAG, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_LISTA:
                printf("`-%sListDecl %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_LISTA_ASIGNAR_ELEMENTO:
                printf("|-%sListAsignDecl %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_LISTA_AGREGAR_ELEMENTO:
                printf("|-%sListAddStmt %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_LISTA_OBTENER_ELEMENTO:
                printf("|-%sListGetDecl %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_DICCIONARIO:
                printf("`-%sDicDecl %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_DICC_AGREGAR_ELEMENTO:
                printf("|-%sDicAddStmt %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_DICC_ELEMENTO:
                printf("|-%sDicElementDecl %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_ATRIBUTO:
                printf("|-%sBuiltinAttr %s<line: %i, col:%i>\n", KBLU, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_GLOBAL:
                printf("`-%sGlobalDecl %s<line: %i, col:%i>\n", KMAG, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_REGEX:
                printf("`-%sRegexDecl %s<line: %i, col:%i>\n", KMAG, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_VAR_ARGS:
                printf("`-%sVarArgsDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_LOAD_VAR_ARGS:
                printf("`-%sLoadVarArgsDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
            case NODO_ROMPER:
                printf("`-%sBreakDecl %s<line: %i, col:%i>\n", KGRN, KYEL,
                       a->nlin, a->ncol);
                break;
        }
        switch (a->tipo) {
            case NODO_SI:
                nodo_si *nsi = (nodo_si *)a;
                latA_imprimir(nsi->cond, n_spaces);
                latA_imprimir(nsi->entonces, n_spaces);
                if (nsi->_sino) {
                    latA_imprimir(nsi->_sino, n_spaces);
                }
                break;
            case NODO_FUNCION_USUARIO:
                nodo_funcion *fun = (nodo_funcion *)a;
                latA_imprimir(fun->nombre, n_spaces);
                if (fun->params) {
                    latA_imprimir(fun->params, n_spaces);
                }
                if (fun->stmts) {
                    latA_imprimir(fun->stmts, n_spaces);
                }
                break;
            case NODO_LISTA_ASIGNAR_ELEMENTO:
                nodo_lista_elem *nelem = (nodo_lista_elem *)a;
                latA_imprimir(nelem->id, n_spaces);
                latA_imprimir(nelem->pos, n_spaces);
                latA_imprimir(nelem->exp, n_spaces);
                break;
            case NODO_MAS_UNARIO:
            case NODO_MENOS_UNARIO:
            case NODO_INC:
            case NODO_DEC:
                if (a->izq) {
                    latA_imprimir(a->izq, n_spaces);
                }
                break;
            default:
                if (a->izq) {
                    latA_imprimir(a->izq, n_spaces);
                }
                if (a->der) {
                    latA_imprimir(a->der, n_spaces);
                }
                break;
        }
        printf("%s", KNRM);
        n_spaces--;
    } else {
        printf("%sERROR: NODO_NULO%s\n", KRED, KNRM);
    }
}

/**
 * latA_analizar_exp: Esta funcion crea el arbol abstracto de sintaxis a partir
 *de una cadena REM: liberar el nodo cuando se deje de ocupar
 **/
ast *latA_analizar_exp(char *expr, int *status) {
    ast *nodo = NULL;
    yyscan_t scanner;
    YY_BUFFER_STATE state;
    lex_state scan_state = {.insert = 0};
    yylex_init_extra(&scan_state, &scanner);
    state = yy_scan_string(expr, scanner);
    *status = yyparse(&nodo, scanner);
    yy_delete_buffer(state, scanner);
    yylex_destroy(scanner);
#if DEPURAR_AST
    latA_imprimir(nodo, 0);
#endif
    return nodo;
}

/**
 * latA_analizar_exp: Esta funcion crea el arbol abstracto de sintaxis a partir
 *de un archivo REM: liberar el nodo cuando se deje de ocupar
 **/
ast *latA_analizar_arch(char *infile, int *status) {
    if (infile == NULL) {
        printf("Especifique un archivo\n");
        return NULL;
    }
    char *dot = strrchr(infile, '.');
    char *extension;
    if (!dot || dot == infile) {
        extension = "";
    } else {
        extension = dot + 1;
        if (strcmp(extension, "lat")) {
            printf("El archivo '%s' no contiene la extension .lat\n", infile);
            return NULL;
        }
    }
    FILE *file = fopen(infile, "r");
    if (file == NULL) {
        printf("No se pudo abrir el archivo: %s\n", infile);
        return NULL;
    }
    fseek(file, 0, SEEK_END);
    int fsize = ftell(file);
    fseek(file, 0, SEEK_SET);
    char *buffer = malloc(fsize + 1);
    size_t newSize = fread(buffer, sizeof(char), fsize, file);
    if (buffer == NULL) {
        printf("No se pudo asignar %d bytes de memoria\n", fsize);
        return NULL;
    }
    if (file != NULL) {
        fclose(file);
    }
    buffer[newSize] = '\0';
    filename = infile;
    ast *nodo = latA_analizar_exp(buffer, status);
    free(buffer);
    return nodo;
}
