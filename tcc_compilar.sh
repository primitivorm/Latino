tcc -o latino src/latino.c src/latlex.c src/latparse.c src/latast.c src/latmem.c \
src/latdic.c src/latdo.c src/latlist.c src/latmv.c src/latobj.c src/latpaqlib.c \
src/latrepl.c src/latgc.c src/latbaselib.c src/latstrlib.c src/latlistlib.c \
src/latdiclib.c src/latfilelib.c src/latmathlib.c src/latsyslib.c src/latpaqlib.c \
src/latdevlib.c -Iinclude -Isrc/linenoise -Isrc/regex-2.7-src/src