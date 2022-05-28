/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rykawamu </var/mail/rykawamu>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:21:06 by rykawamu          #+#    #+#             */
/*   Updated: 2022/05/28 16:21:29 by rykawamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char	c, int	fd)
{
	write(fd, &c, 1);
}

/*#include <stdio.h>
#include <fcntl.h>

int main(void) {
    const char* filename = "./sample.txt";

    int fd = open(filename, O_RDWR | O_CREAT, 0777);
    if (fd == -1) {
        perror("no open");
        exit(EXIT_FAILURE);
    }
    ft_putchar_fd('c', fd);
    printf("ok\n");
    close(fd);
    exit(EXIT_SUCCESS);
}*/
