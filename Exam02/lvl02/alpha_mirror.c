/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonnel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 07:47:10 by ljonnel-          #+#    #+#             */
/*   Updated: 2018/09/06 07:47:54 by ljonnel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	c;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = 'Z' - argv[1][i] + 65;
				write(1, &c, 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = 'z' - argv[1][i] + 97;
				write(1, &c, 1);
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
