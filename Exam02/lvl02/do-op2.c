/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljonnel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 07:48:05 by ljonnel-          #+#    #+#             */
/*   Updated: 2018/09/06 07:48:07 by ljonnel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(const char *str)
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

int		ft_calc(char *c1, char *c2, char c)
{
	int a;
	int b;

	a = ft_atoi(c1);
	b = ft_atoi(c2);
	if (c == '+')
		return (a + b);
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		return (a / b);
	else if (c == '%')
		return (a % b);
	else
		return (a - b);
}

void	ft_putnbr(int i)
{
	char c;

	if (i != 0)
	{
		ft_putnbr(i / 10);
		c = (i % 10) + '0';
		write(1, &c, 1);
	}
}

int		main(int argc, char **argv)
{
	int value;

	if (argc == 4 && !argv[2][1] && (argv[2][0] == '+' || argv[2][0] == '-'
			|| argv[2][0] == '*' || argv[2][0] == '/' || argv[2][0] == '%'))
	{
		value = ft_calc(argv[1], argv[3], argv[2][0]);
		if (value > 0)
			ft_putnbr(value);
		else if (value < 0)
		{
			write(1, "-", 1);
			ft_putnbr(-value);
		}
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
