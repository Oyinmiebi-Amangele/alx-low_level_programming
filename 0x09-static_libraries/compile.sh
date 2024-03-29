#!/bin/bash

source_files=("0-isupper.c" "0-memset.c" "0-strcat.c" "1-isdigit.c" "1-memcpy.c" "1-strncat.c" "100-atoi.c" "2-strchr.c" "2-strlen.c" "2-strncpy.c" "3-islower.c" "3-puts.c" "3-strcmp.c" "3-strspn.c" "4-isalpha.c" "4-strpbrk.c" "5-strstr.c" "6-abs.c" "9-strcpy.c" "_putchar.c")
output_files=("0-isupper.o" "0-memset.o" "0-strcat.o" "1-isdigit.o" "1-memcpy.o" "1-strncat.o" "100-atoi.o" "2-strchr.o" "2-strlen.o" "2-strncpy.o" "3-islower.o" "3-puts.o" "3-strcmp.o" "3-strspn.o" "4-isalpha.o" "4-strpbrk.o" "5-strstr.o" "6-abs.o" "9-strcpy.o" "_putchar.o")

for ((i=0; i<${#source_files[@]}; i++)); do
    gcc -c "${source_files[$i]}" -o "${output_files[$i]}"
done
