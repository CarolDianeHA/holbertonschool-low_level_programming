#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif