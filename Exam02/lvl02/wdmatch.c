#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			check = 0;
			while (argv[2][j])
			{
				if (argv[2][j] == argv[1][i])
				{
					check = 1;
					break ;
				}
			j++;
			}
			if (check == 0)
				break ;
			i++;
		}
		if (check)
			ft_putstr(argv[1]);	
	}
	write(1, "\n", 1);
	return (0);
}