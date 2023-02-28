#include <libft.h>

/*void	ft_print_params(int arg, char *tab[])
{
	int	a;
	int	b;

	a = 1;
	while (a < arg)
	{
		b = 0;
		while (tab[a][b] != '\0')
		{
			ft_putchar(tab[a][b]);
			b++;
		}
		ft_putchar('\n');
		a++;
	}
}
*/
int	main(int arg, char **tab)
{
	int	a;

	a = 1;
	while (a < arg)
	{
		ft_putstr(tab[a]);
		ft_putchar('\n');
		a++;
	}
	return (0);
}
