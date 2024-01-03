/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarzouk <rmarzouk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 23:53:09 by rmarzouk          #+#    #+#             */
/*   Updated: 2023/10/01 10:50:42 by rmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	j;
	int	i;

	i = 1;
	j = 0;
	(void)argc;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			++j;
		}
		++i;
		write(1, "\n", 1);
	}
}
