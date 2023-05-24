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


/******** prompt.c ********/

void prompt(void);
void doornob(int signal_song);
void _EOF(char *buffer);
void shell_ex(char **cmd);


/******** cd.c ********/

void create_door(char **cmd, char *nm, char **env, int cc);
int change_direct(const char *trail);




#endif
