#!/bin/bash
gcc -c -Wall -Werror -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up intermediate object file
rm *.o
