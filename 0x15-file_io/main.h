#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>

/* prototypes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif
