/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:36:16 by pnona             #+#    #+#             */
/*   Updated: 2021/12/05 19:57:13 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_identifications(const char *line, va_list p)
{
	if (*line == 'c')
		return (print_c(va_arg(p, int)));
	else if (*line == 's')
		return (print_s(va_arg(p, char *)));
	else if (*line == 'p')
	{
		print_s("0x");
		return (2 + print_p(va_arg(p, unsigned long)));
	}
	else if (*line == 'd' || *line == 'i')
		return (print_di(va_arg(p, int)));
	else if (*line == 'u')
		return (print_u(va_arg(p, unsigned int)));
	else if (*line == 'x')
		return (print_xX(va_arg(p, unsigned int), 0));
	else if (*line == 'X')
		return (print_xX(va_arg(p, unsigned int), 1));
	else if (*line == '%')
		return (print_c('%'));
	return (0);
}

int	ft_searcher(const char *line, va_list p)
{
	int	i;

	i = 0;
	while (*line)
	{
		if (*line == '%')
		{
			line++;
			i += ft_identifications(line, p);
		}
		else
		{
			print_c(*line);
			i++;
		}
		line++;
	}
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	ptr;
	int		i;

	va_start(ptr, str);
	i = ft_searcher(str, ptr);
	va_end(ptr);
	return (i);
}
