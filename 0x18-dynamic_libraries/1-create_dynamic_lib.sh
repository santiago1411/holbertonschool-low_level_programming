gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
nm -D liball.so
