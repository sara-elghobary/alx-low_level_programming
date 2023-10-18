#ifndef MYHEADERS_H
#define MYHEADERS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_COMMAND_LENGTH 100


int _putchar(char c);
void display_prompt();
void tokenize_command(char *command, char *args[]);
void execute_external_command(char *args[], char *program_name, int line_number);
void execute_command(char *command, int line_number, char *program_name);
void print_environment_variables();
int _strlen(char *s);
char *_strdup(char *str);
int _strcmp(char *s1, char *s2);
char *itoa(int val, int base);
char *_strcpy(char *dest, char *src);
#endif
