#include <libft.h>

void	ft_sort_params(int arg, char **tab)
{
	int	a;
	int	b;

	a = 1;
	while (a < arg - 1)
	{
		b = a + 1;
		while (b < arg)
		{
			if (ft_strcmp(tab[a], tab[b]) > 0)
			{
				ft_swap((int *)&tab[a], (int *)&tab[b]);
			}
				b++;
		}
		a++;
	}
	a = 1;
	while (a < arg)
	{
		ft_putstr(tab[a]);
		ft_putchar('\n');
		a++;
	}
}

int	main(int arg, char **tab)
{
	ft_sort_params(arg, tab);
	return (0);
}
