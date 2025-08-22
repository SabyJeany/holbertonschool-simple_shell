#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

extern char **environ;

void printPrompt(void);

void token_input(char *input);

char *_getpath(char *cmd);

void executable(char **argv, char *input);


#endif
