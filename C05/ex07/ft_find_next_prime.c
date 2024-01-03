/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:54:48 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/10/01 21:45:29 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_pirme(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 0)
		return (2);
	while (nb)
	{
		if (ft_is_pirme(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}
