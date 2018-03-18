/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/18 16:25:46 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/18 16:58:55 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*ptr;
	int		i;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(ptr = (int *)malloc(sizeof(*ptr) * (max - min))))
		return (NULL);
	while (min < max)
		ptr[i++] = min++;
	return (ptr);
}
