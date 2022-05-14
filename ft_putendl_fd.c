#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
    ft_putstr_fd(s, fd);
    write(fd, "\n", 1);
}

// #include <stdio.h>
// #include <fcntl.h>

// int main(void) {
//     const char* filename = "./sample03.txt";

//     int fd = open(filename, O_RDWR | O_CREAT);
//     if (fd == -1) {
//         perror("no open");
//         exit(EXIT_FAILURE);
//     }
//     ft_putendl_fd("abcde", fd);
//     printf("ok\n");
//     close(fd);
//     exit(EXIT_SUCCESS);
// }