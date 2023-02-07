#ifndef FILE_IO
#define FILE_IO

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/* function prototpyes */
ssize_t read_textfile(const char *filename, size_t letters);

#endif /* FILE_IO */
