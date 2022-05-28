/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rykawamu </var/mail/rykawamu>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:23:15 by rykawamu          #+#    #+#             */
/*   Updated: 2022/05/28 16:23:42 by rykawamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char	*s, int	fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*#include <stdio.h>
#include <fcntl.h>

int main(void) {
    const char* filename = "./sample3.txt";

    int fd = open(filename, O_RDWR | O_CREAT, 0777);
    if (fd == -1) {
        perror("no open");
        exit(EXIT_FAILURE);
    }
    ft_putendl_fd("42", fd);
    printf("ok\n");
    ft_putendl_fd("tokyo", fd);
    close(fd);
    exit(EXIT_SUCCESS);
}*/
