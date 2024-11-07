/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:40:32 by mhoyuela          #+#    #+#             */
/*   Updated: 2024/05/08 16:26:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		r;

	nb = n;
	if (nb == 0)
		write (fd, "0", 1);
	if (nb < 0)
	{
		nb = nb * -1;
		write (fd, "-", 1);
	}
	if (nb > 0 && nb <= 9)
	{
		r = nb + '0';
		write (fd, &r, 1);
	}
	if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd);
		ft_putnbr_fd (nb % 10, fd);
	}
}
/* int main()
{
	ft_putnbr_fd(-48, 2);
	return (0);
} */