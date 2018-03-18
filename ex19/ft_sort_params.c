/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 13:28:40 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/18 12:08:31 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(const char *s1, const char *s2)
{
	while(*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

void	ft_sort_argv(int argc, char **argv)
{
	char	*tmp;
	int		count;
	int		i;

	count = argc - 2;
	i = 1;

	while (count)
	{
		count = argc - 2;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			else
				count--;
			i++;
		}
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;

	ft_sort_argv(argc, argv);

	while (--argc)
	{
		ft_putstr(argv[++i]);
		ft_putchar('\n');
	}
	return (0);
}
