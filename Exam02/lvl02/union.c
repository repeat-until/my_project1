#include <unistd.h>

int	ft_check_char(char *str, char c, int index)
{
	int i;

	i = 0;
	while (str[i] && (i < index || index  == -1))
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int check;

	check = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_check_char(argv[1], argv[1][i], i))
				write(1, &argv[1][i], 1);
		i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_check_char(argv[2], argv[2][i], i) && ft_check_char(argv[1], argv[2][i], -1))
				write(1, &argv[2][i], 1);
		i++;
		}
	}
	write(1, "\n", 1);
}
