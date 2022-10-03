#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

char *_getenv(const char *filename);
char *locate(const char *name);
char *join_paths(char sep, char *path1, char *path2);
#endif
