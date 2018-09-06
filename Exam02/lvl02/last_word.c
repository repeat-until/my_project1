
#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int size;

	if (argc == 2)
	{
		size = ft_strlen(argv[1]);
		while (argv[1][size - 1] == ' ')
			size--;
		while (argv[1][size - 1] != ' ')
			size--;
		while (argv[1][size] != ' ' && argv[1][size])
		{
			write(1, &argv[1][size], 1);
			size++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
