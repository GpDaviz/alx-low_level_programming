#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include<stdbool.h>

void gp_print( const char *my_print_function);
void gp_prompt(void);
void execute_mycommand(const char *mycommand);
void call_command(char *command, size_t size);
