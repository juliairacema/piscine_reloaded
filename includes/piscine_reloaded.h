/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   piscine_reloaded.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhojt <dhojt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/17 02:07:05 by dhojt             #+#    #+#             */
/*   Updated: 2018/03/17 02:52:56 by dhojt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PISCINE_RELOADED_H
# define PISCINE_RELOADED_H

#include <unistd.h>

/*
**My functions
*/
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *str);


/*
**Piscine Reloaded functions
*/
void	ft_print_alphabet(void);
void	ft_print_numbers(void);

#endif
