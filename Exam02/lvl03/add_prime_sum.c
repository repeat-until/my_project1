#include <unistd.h>

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

int check_prime(int n)
{
	int i;

	i = 2;
	while (i < n - 1)
		if (n % i)
			return (0);
	return (1);
}

void	ft_putnbr(int n)
{
	char	c;
	if (n != 0)
	{
		ft_putnbr(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int value;
	int	numb;

	value = 0;
	i = 0;
	if (argc == 2 && numb > 0)
	{
		numb = ft_atoi(argv[1]);
		while (numb > 1)
		{
			if (check_prime(numb))
				value = value + numb;
			numb--;
		}
	}
	if (value != 0)
		ft_putnbr(value);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}