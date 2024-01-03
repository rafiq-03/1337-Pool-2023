/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:00:48 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/10/05 19:17:56 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*range;

	len = max - min;
	if (len <= 0)
		return (NULL);
	i = 0;
	range = (int *) malloc (len * sizeof(int));
	if (!range)
		return (NULL);
	while (i < len)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
