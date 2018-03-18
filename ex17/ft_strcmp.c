/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/27 15:37:29 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/17 12:59:05 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_getlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strncmp(const char *s1, const char *s2, int n)
{
	if (!(n))
		return (0);
	n--;
	while(n && *s1 && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}

int		ft_strcmp(char *s1, char *s2)
{
	if (ft_getlen(s1) > ft_getlen(s2))
		return(ft_strncmp(s1, s2, (ft_getlen(s1))));
	return(ft_strncmp(s1, s2, (ft_getlen(s2))));
}
