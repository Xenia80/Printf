/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:06:55 by pnona             #+#    #+#             */
/*   Updated: 2021/12/05 19:57:03 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h> //malloc
# include <unistd.h> // write
# include <stddef.h> // size_t
# include <stdarg.h> //va

int		ft_printf(const char *str, ...);
int		ft_identifications(const char *line, va_list p);
int		ft_searcher(const char *line, va_list p);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int n);
int		print_di(int n);
int		print_u(unsigned int n);
int		print_c(char a);
int		print_s(char *str);
int		print_p(unsigned long l);
int		print_xX(unsigned int n, int type);

#endif