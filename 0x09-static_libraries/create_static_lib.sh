#!/bin/bash
gcc -Wall -pedantic -warrior-werror -wextra -c *.c
ar rc liball.a *.o
