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

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (ft_strcmp(argv[1], "ex06") == 0)
			ex06();
	}
	return (0);
}
