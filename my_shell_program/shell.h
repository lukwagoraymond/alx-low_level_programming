#ifndef SHELL_H
#define SHELL_H

/* File Header for Basi Functions & Marcos */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <signal.h>

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

/* utility String Helper Functions */
ssize_t _printf(char *, int);
unsigned int _strlen(char *);

void ctrl_C_func(int);



#endif