/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carzhang <carzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:58:23 by carzhang          #+#    #+#             */
/*   Updated: 2024/06/15 15:23:54 by carzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(int c);
int		ft_putstr(const char *s);
int		ft_printd(int d);
int		ft_print_unsigned(unsigned int n);
int		ft_printp(void *p);
int		ft_printx(unsigned int n);
int		ft_printuppercase(unsigned int n);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_itoa_base(long unsigned int value, int base);
size_t	ft_strlen(const char *s);

#endif
