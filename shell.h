#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024

void print_string(char *string);
char **token(char *stg);
void prompt(int file, struct stat buffer);
void _puts(char *string);
void create_cld(char **cmd, char *nm, har **env, int cc);
int change_direct(const char *dest);

#endif
