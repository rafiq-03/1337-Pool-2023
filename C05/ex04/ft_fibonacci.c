/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 17:50:05 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/09/30 17:56:45 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	if (index < 0)
		return (-1);
	if (index == 0)
		result = 0;
	if (index == 1)
		result = 1;
	else if (index >= 2)
		result = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
	return (result);
}
