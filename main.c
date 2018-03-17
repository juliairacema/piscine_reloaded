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

void	ex08(void)
{
	ft_putstr("ex08\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("NNPPP\n");
	ft_putstr("Result:\n\t");
	ft_is_negative(-42);
	ft_is_negative(-1);
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(42);
	ft_putstr("\n\n");
}

void	ex09(void)
{
	int		i;
	int		*nbr;

	i = 9;
	nbr = &i;

	ft_putstr("ex09\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("42\n");
	ft_putstr("Result:\n\t");
	ft_ft(nbr);
	ft_putnbr(*nbr);
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
		if (ft_strcmp(argv[1], "ex08") == 0)
			ex08();
		if (ft_strcmp(argv[1], "ex09") == 0)
			ex09();
	}
	return (0);
}
