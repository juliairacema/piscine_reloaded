#include "piscine_reloaded.h"

void	ex06(void)
{
	ft_putstr("ex06\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("abcdefghijklmnopqrstuvwxyz\n");
	ft_putstr("Result:\n\t");
	ft_print_alphabet();
	ft_putstr("\n\n");
}

void	ex07(void)
{
	ft_putstr("ex07\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("0123456789\n");
	ft_putstr("Result:\n\t");
	ft_print_numbers();
	ft_putstr("\n\n");
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "ex06") == 0)
			ex06();
		if (ft_strcmp(argv[1], "ex07") == 0)
			ex07();
	}
	return (0);
}
