/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:40:14 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/10/01 16:33:45 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	if (nb < 0)
		result = 0;
	if (nb == 1 || nb == 0)
		result = 1;
	else if (nb > 1)
	{
		result = nb * ft_recursive_factorial(nb - 1);
	}
	return (result);
}
