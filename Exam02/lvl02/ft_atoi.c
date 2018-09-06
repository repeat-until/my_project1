/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonnel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 07:48:14 by ljonnel-          #+#    #+#             */
/*   Updated: 2018/09/06 07:48:15 by ljonnel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i;
	int size;
	int value;

	i = 0;
	size = 1;
	value = 0;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\n')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		i++;
		size = -1;
	}
	while (str[i] <= '9' && str[i] >= '0' && str[i])
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * size);
}
