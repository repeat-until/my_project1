/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonnel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 07:48:39 by ljonnel-          #+#    #+#             */
/*   Updated: 2018/09/06 07:48:41 by ljonnel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check(char *str, char c, int index)
{
	int i;

	i = 0;
	while (str[i] && (i < index || index == -1))
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	full_check(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i])
	{
		if (!(ft_check(str2, str1[i], -1)))
		{
			if (ft_check(str1, str1[i], i))
			{
				write(1, &str1[i], 1);
			}
		}
		i++;
	}
}
