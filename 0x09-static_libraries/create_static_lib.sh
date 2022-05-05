#!/bin/bash
ar rc liball.a ./*.c
gcc -c ./*.c
ar rc liball.a ./*.o

