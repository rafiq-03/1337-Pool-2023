/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 07:47:31 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/09/14 16:56:19 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_n(char a, char b, char c)
{
	write (1, &a, 1); 
	write (1, &b, 1); 
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8' )
		{
			c = b + 1 ;
			while (c <= '9')
			{
				ft_print_n(a, b, c);
				if (!(a == '7' && b == '8' && c == '9'))
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
