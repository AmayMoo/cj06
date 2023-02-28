#include <libft.h>

int	ft_rev_params(int arg, char **tab)
{
	int	a;

	a = arg - 1;
	while (a > 0)
	{
		ft_putstr(tab[a]);
		ft_putchar('\n');
		a--;
	}
	return (0);
}

int	main(int arg, char *tab[])
{
	ft_rev_params(arg, tab);
	return (0);
}
