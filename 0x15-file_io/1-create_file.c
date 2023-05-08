#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int create_file(const char *filename, char *text_content) {
    int fd, len, bytes_written;
    mode_t mode = S_IRUSR | S_IWUSR;  // rw-------

    if (filename == NULL) {
        return -1;  // filename cannot be NULL
    }

    fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (fd == -1) {
        return -1;  // file cannot be created or opened
    }

    if (text_content != NULL) {
        len = strlen(text_content);
        bytes_written = write(fd, text_content, len);
        if (bytes_written != len) {
            close(fd);
            return -1;  // write fails
        }
    }

    close(fd);
    return 1;  // success
}
