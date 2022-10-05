#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
char *create_array(unsigned int size, char c);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

#endif
