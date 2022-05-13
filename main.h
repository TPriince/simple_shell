#ifndef MAIN_H
#define MAIN_H

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
