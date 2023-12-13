#ifndef MAIN_H
#define MAIN_H

#define PERROR(msg) perror(msg)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int ac, char **argv);
void cmdexec(char **argv);
char *find_location(char *command);
int stat(const char *pathname, struct stat *statbuf);
void prompt(void);

#endif /*MAIN_H*/
