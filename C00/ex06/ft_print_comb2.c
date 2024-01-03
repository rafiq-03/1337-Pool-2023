/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:03:31 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/09/15 10:04:08 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	int_to_char(int n)
{
	char	a;

	if (n < 10)
	{
		a = n + 48;
		write(1, "0", 1);
		write (1, &a, 1);
		return ;
	}
	a = (n / 10) + 48;
	write (1, &a, 1);
	a = (n % 10) + 48;
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			int_to_char(num1);
			write (1, " ", 1);
			int_to_char(num2);
			if (!(num1 == 98))
				write (1, ", ", 2);
			num2++;
		}
		num1++;
	}
}
