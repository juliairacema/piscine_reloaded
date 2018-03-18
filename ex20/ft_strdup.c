/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:38 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/18 16:23:18 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strncpy(char *dst, const char *src, int len)
{
	int		i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

char	*ft_strnew(int size)
{
	char	*start;
	char	*ptr;
	int		i;

	start = (char *) malloc((size + 1) * sizeof(*start));
	if (!start)
		return (NULL);
	ptr = start;
	while (i < size + 1)
		start[i++] = 0;
	return (start);
}

int		ft_get_len(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s2;
	int		size;
	int		trail_zero;

	size = ft_get_len(src);
	s2 = ft_strnew(size);
	if (!s2)
		return (NULL);
	ft_strncpy(s2, src, size);
	if (trail_zero)
		s2[size] = '\0';
	return (s2);
}
