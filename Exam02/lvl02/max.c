int	max(int *tab, unsigned int len)
{
	int max;
	int i;

	if (!tab)
		return (0);
	max = tab[0];
	i = 0;
	while (++i < len)
		if (tab[i] > max)
			max = tab[i];
	return (max);
}
