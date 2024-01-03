/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:44:48 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/10/01 16:34:45 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	if (power < 0)
		result = 0;
	if (power == 0)
		result = 1;
	else if (power > 0)
	{
		result = nb * ft_recursive_power(nb, (power - 1));
	}
	return (result);
}
