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

/**
 * struct linkedList - linked list data structure
 * @string: environ variable path name
 * @next: pointer to next node
 */
typedef struct linkedList
{
	char *string;
	struct linkedList *next;
} linked_l;

/**
 * struct configurations - configuration of build settings
 * @env: linked list of local env variables
 * @envList: array of env variables to put into execve
 * @args: array of argument strings
 * @buffer: string buffer of user input
 * @path: array of $PATH locations
 * @fullPath: string of path with correct prepended $PATH
 * @shellName: name of shell (argv[0])
 * @lineCounter: counter of lines users have entered
 * @errorStatus: error status of last child process
 */
typedef struct configurations
{
	linked_l *env;
	char **envList;
	char **args;
	char *buffer;
	char *path;
	char *fullPath;
	char *shellName;
	unsigned int lineCounter;
	int errorStatus;
} config;

/* main */
config *configInit(config *build);

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

/* linkedlistfuncs1 */
linked_l *addNode(linked_l **head, char *str);
linked_l *addNodeEnd(linked_l **head, char *str);
size_t printList(const linked_l *h);
int searchNode(linked_l *head, char *str);
size_t list_len(linked_l *h);

/* linkedlistfuncs2 */
int deleteNodeAtIndex(linked_l **head, unsigned int index);
linked_l *generateLinkedList(char **array);
linked_l *addNodeAtIndex(linked_l **head, int index, char *str);
char *getNodeAtindex(linked_l *head, unsigned int index);


#endif
