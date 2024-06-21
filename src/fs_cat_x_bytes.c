/*
** EPITECH PROJECT, 2023
** bs seting up
** File description:
** in c
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void fs_cat_x_bytes(char const *filepath, int x)
{
    int fd = 0;
    int size = 0;
    char buffer[x];

    fd = open(filepath, O_RDONLY);
    size = read(fd, buffer, x);
    write(1, buffer, size);
    close(fd);
}
