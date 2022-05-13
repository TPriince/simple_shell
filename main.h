#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fctntl.h>
#include <errno.h>
#include <signal.h>
#include <limits.h>

extern char **environ;

/* _getenv */
char *_getenv(char *input, char **environ);

/* check_path */
_Bool checkPath(config *);
_Bool checkEdgeCases(config *build);

/* split_string */
_Bool splitString(config *build);
unsigned int countWords(char *s);
_Bool isSpace(char c);


/* shell */
void shell(config *build);

/* str_funcs1 */
int _strlen(char *s);
char *_strcat(char *dest, char *src);
int _strcmp(char *s1, char *s2);
char *strdup(char *str);
char *_strcpy(char *dest, char *src);

/* str_funcs2 */
char *_strtok(char *str, char *delim);
int _strcspn(char *string, char *chars);
char *_strchr(char *s, char c);


#endif
