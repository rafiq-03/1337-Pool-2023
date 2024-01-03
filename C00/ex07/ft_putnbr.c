/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:48:48 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/09/16 17:53:48 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c )
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb *= -1;
		}
		if (nb < 10)
			ft_putchar(nb + '0');
		else 
		{
			ft_putnbr(nb / 10);
			ft_putchar((nb % 10) + '0');
		}
	}
}
