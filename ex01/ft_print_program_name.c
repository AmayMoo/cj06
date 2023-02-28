#include <libft.h>

int	ft_print_program_name(char *prog_name)
{
	int i;

	i = 0;
	while (prog_name[i] !='\0')
	{
		ft_putchar(prog_name[i]);
		i++;
	}
	ft_putchar('\n');
		return (0);
}

int	main(int arg, char *tab[])
{
	if (arg >= 1)
		ft_print_program_name(tab[0]);
	return (0);
}
