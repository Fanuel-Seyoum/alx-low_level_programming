#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "main.h"

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }
    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;
    }
    if (text_content != NULL) {
        int len = 0;
        while (text_content[len] != '\0') {
            len++;
        }
        if (write(fd, text_content, len) != len) {
            close(fd);
            return -1;
        }
    }
    close(fd);
    return 1;
}
