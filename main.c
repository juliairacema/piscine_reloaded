#include "piscine_reloaded.h"
#include "ft_abs.h"
#include "ft_point.h"

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

void	ex10(void)
{
	int a;
	int b;
	int *a1;
	int *b1;

	a = 27;
	b = 42;
	a1 = &a;
	b1 = &b;

	ft_putstr("ex10\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("42 27\n");
	ft_putstr("Result:\n\t");
	ft_swap(a1, b1);
	ft_putnbr(*a1);
	ft_putstr(" ");
	ft_putnbr(*b1);
	ft_putstr("\n\n");
}

void	ex11(void)
{
	int a;
	int b;
	int *a1;
	int *b1;

	a = 27;
	b = 42;
	a1 = &a;
	b1 = &b;

	ft_putstr("ex11\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("2 4\n");
	ft_putstr("Result:\n\t");
	ft_div_mod(20, 8, a1, b1);
	ft_putnbr(*a1);
	ft_putstr(" ");
	ft_putnbr(*b1);
	ft_putstr("\n\n");
}

void	ex12(void)
{
	ft_putstr("ex12\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("0 0 1 1 6 5040 479001600 0\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ft_iterative_factorial(-42));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(-1));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(0));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(1));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(3));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(7));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(12));
	ft_putstr(" ");
	ft_putnbr(ft_iterative_factorial(13));
	ft_putstr(" ");
	ft_putstr("\n\n");
}

void	ex13(void)
{
	ft_putstr("ex13\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("0 0 1 1 6 5040 479001600 0\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ft_recursive_factorial(-42));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(-1));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(0));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(1));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(3));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(7));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(12));
	ft_putstr(" ");
	ft_putnbr(ft_recursive_factorial(13));
	ft_putstr(" ");
	ft_putstr("\n\n");
}

void	ex14(void)
{
	ft_putstr("ex14\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("0 0 0 0 0 2 4 11 12 0\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ft_sqrt(-42));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(-1));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(0));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(1));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(2));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(4));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(16));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(121));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(144));
	ft_putstr(" ");
	ft_putnbr(ft_sqrt(145));
	ft_putstr(" ");
	ft_putstr("\n\n");
}

void	ex15(void)
{
	ft_putstr("ex15\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("Some Text\n");
	ft_putstr("Result:\n\t");
	ft_putstr("Some Text");
	ft_putstr("\n\n");
}

void	ex16(void)
{
	ft_putstr("ex16\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("3 0 1 7\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ft_strlen("Cat"));
	ft_putstr(" ");
	ft_putnbr(ft_strlen(""));
	ft_putstr(" ");
	ft_putnbr(ft_strlen("B"));
	ft_putstr(" ");
	ft_putnbr(ft_strlen("Ann\nDav"));
	ft_putstr(" ");
	ft_putstr("\n\n");
}

void	ex17(void)
{
	ft_putstr("ex17\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("0 0 2 1\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ft_strcmp("Cat", "Cat"));
	ft_putstr(" ");
	ft_putnbr(ft_strcmp("", ""));
	ft_putstr(" ");
	ft_putnbr(ft_strcmp("Becausg", "Because"));
	ft_putstr(" ");
	ft_putnbr(ft_strcmp("Ann\nDav", "Ann\tDav"));
	ft_putstr(" ");
	ft_putstr("\n\n");
}

void	ex20(void)
{
	char *str;

	str = ft_strdup("Hello, world!");
	ft_putstr("ex20\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("Hello, world!\n");
	ft_putstr("Result:\n\t");
	ft_putstr(str);
	ft_putstr("\n\n");
}

void	ex21(void)
{
	int *ptr;
	int a;
	int b;

	a = 27;
	b = 43;
	if ((ptr = ft_range(a, b)))
	{
		ft_putstr("ex20\n");
		ft_putstr("Expecting:\n\t");
		ft_putstr("27282930313233343536373839404142\n");
		ft_putstr("Result:\n\t");
		while (a++ < b)
		{
			ft_putnbr(*ptr);
			ptr++;
		}
		ft_putstr("\n\n");
	}
}

void	ex22(void)
{
	int		a;
	int		b;
	int		c;

	a = ABS(-27);
	b = ABS(0);
	c = ABS(42);

	ft_putstr("ex22\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("27 0 42\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(ABS(a));
	ft_putchar(' ');
	ft_putnbr(ABS(b));
	ft_putchar(' ');
	ft_putnbr(ABS(c));
	ft_putchar(' ');
	ft_putstr("\n\n");
}

void	ex23slave(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void	ex23(void)
{
	t_point		point;

	ex23slave(&point);

	ft_putstr("ex23\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("42 21\n");
	ft_putstr("Result:\n\t");
	ft_putnbr(point.x);
	ft_putchar(' ');
	ft_putnbr(point.y);
	ft_putstr("\n\n");
}

void	ex25(void)
{
	//void	(*f)(int);
	int		num[3] = {0, 27, 42};

	//f = ft_putnbr;
	ft_putstr("ex25\n");
	ft_putstr("Expecting:\n\t");
	ft_putstr("02742\n");
	ft_putstr("Result:\n\t");
	ft_foreach(num, 3, &ft_putnbr);
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
		if (ft_strcmp(argv[1], "ex10") == 0)
			ex10();
		if (ft_strcmp(argv[1], "ex11") == 0)
			ex11();
		if (ft_strcmp(argv[1], "ex12") == 0)
			ex12();
		if (ft_strcmp(argv[1], "ex13") == 0)
			ex13();
		if (ft_strcmp(argv[1], "ex14") == 0)
			ex14();
		if (ft_strcmp(argv[1], "ex15") == 0)
			ex15();
		if (ft_strcmp(argv[1], "ex16") == 0)
			ex16();
		if (ft_strcmp(argv[1], "ex17") == 0)
			ex17();
		if (ft_strcmp(argv[1], "ex20") == 0)
			ex20();
		if (ft_strcmp(argv[1], "ex21") == 0)
			ex21();
		if (ft_strcmp(argv[1], "ex22") == 0)
			ex22();
		if (ft_strcmp(argv[1], "ex23") == 0)
			ex23();
		if (ft_strcmp(argv[1], "ex25") == 0)
			ex25();
	}
	return (0);
}
