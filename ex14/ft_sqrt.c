/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 11:06:04 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/17 11:26:06 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	if (nb > 0)
	{
		while (++i <= (nb / 2))
		{
			if (i * i == nb)
				return (i);
		}
	}
	return (0);
}