#!/bin/bash
-Wall -Werror -Wextra -pedantic -c *.c
ar rc liball.a
ranlib liball.a
