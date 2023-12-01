# Makefiles

This repository contains a series of Makefiles created as part of the Full Stack Software Engineering studies at ALX. The goal of this project is to understand the concepts of makefiles, when, why, and how to use them, including the use of variables, explicit and implicit rules.

## Technologies

- C files are compiled using gcc
- Tested on Ubuntu 20.04 LTS

## Files

### 0-Makefile

Builds an executable with all rules.

### 1-Makefile

Builds an executable specifying a compiler and source files (`CC` and `SRC` variables).

### 2-Makefile

Builds an executable using `CC`, `SRC`, `OBJ`, and `NAME` variables.

### 3-Makefile

Builds an executable using `clean`, `oclean`, `fclean`, and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME`, and `RM` variables.

### 4-Makefile

Builds an executable using `clean`, `oclean`, `fclean`, and `re` rules, and `CC`, `SRC`, `OBJ`, `NAME`, `RM`, and `CFLAGS` variables.

### 5-island_perimeter.py

Function that returns the perimeter of an island described in a grid list.

### 100-Makefile

Complete Makefile with all of the variables and rules mentioned above.

## How to Use

Each Makefile in this repository serves a specific purpose. To build the executables or perform other actions, navigate to the directory containing the relevant Makefile and run the following commands:

- To build: `make`
- To clean object files: `make oclean`
- To clean executable files: `make fclean`
- To recompile: `make re`

Ensure you have the required technologies installed and meet the specified version dependencies for successful execution.
