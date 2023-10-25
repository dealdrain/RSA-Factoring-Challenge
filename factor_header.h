#ifndef FACTOR_H
#define FACTOR_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define _GNU_SOURCE

/* size_t getline(char **lineptr, size_t *n, FILE *stream); */
int factorize(char *buffer);

#endif /* FACTOR_H */
