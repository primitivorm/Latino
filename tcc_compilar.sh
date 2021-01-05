tcc -o latino src/latino.c src/latlex.c src/latparse.c src/latast.c src/latmem.c \
src/latdic.c src/latdo.c src/latlist.c src/latmv.c src/latobj.c src/latpaqlib.c \
src/latrepl.c src/latgc.c src/latbaselib.c src/latstrlib.c src/latlistlib.c \
src/latdiclib.c src/latfilelib.c src/latmathlib.c src/latsyslib.c src/latpaqlib.c \
src/latdevlib.c -Iinclude -Isrc/linenoise -Isrc/regex-2.7-src/src \
-I"C:\Program Files (x86)\Windows Kits\10\Include\10.0.18362.0\ucrt" \
-I"C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.28.29333\include"