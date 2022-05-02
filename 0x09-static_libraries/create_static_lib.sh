#!/bin/bash
gcc -Wall -pedantic -Werror - Wexter -c *.c
ar -rc liball.a *.o
