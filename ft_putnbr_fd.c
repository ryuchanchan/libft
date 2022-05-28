/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rykawamu </var/mail/rykawamu>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:24:04 by rykawamu          #+#    #+#             */
/*   Updated: 2022/05/28 16:26:19 by rykawamu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int	n, int	fd)
{
	if (n == INT_MIN)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd('0' + n, fd);
}
/*#include <stdio.h>
#include <fcntl.h>

int main(void) {
    const char* filename = "./sample4.txt";

    int fd = open(filename, O_RDWR | O_CREAT, 0777);
    if (fd == -1) {
        perror("no open");
        exit(EXIT_FAILURE);
    }
    ft_putnbr_fd(333, fd);
    printf("ok\n");
    close(fd);
    exit(EXIT_SUCCESS);
}*/
