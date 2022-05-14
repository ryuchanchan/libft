#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    size_t i;

    if (!s)
        return ;
    i = 0;
    while (s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}

// #include <stdio.h>
// #include <fcntl.h>

// int main(void) {
//     const char* filename = "./sample2.txt";

//     int fd = open(filename, O_RDWR | O_CREAT);
//     if (fd == -1) {
//         perror("no open");
//         exit(EXIT_FAILURE);
//     }
//     ft_putstr_fd("abcdef",fd);
//     printf("ok\n");
//     close(fd);
//     exit(EXIT_SUCCESS);
// }