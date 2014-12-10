Malloc_Implementation
=====================
gcc -g -Wall -o0 -fPIC -shared malloc.c -o libmymalloc.so
gcc test.c -L . -lmymalloc.so