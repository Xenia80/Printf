/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:57:09 by pnona             #+#    #+#             */
/*   Updated: 2021/12/05 19:57:34 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_c(char a)
{
	write (1, &a, 1);
	return (1);
}

int	print_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_p(unsigned long l)
{
	char	*base;
	int		i;

	i = 1;
	base = "0123456789abcdef";
	if (l < 16)
	{
		write(1, &base[l], 1);
	}
	else
	{
		i += print_p(l / 16);
		print_p(l % 16);
	}
	return (i);
}

int	print_xX(unsigned int n, int type)
{
	char	*base;
	int		i;

	i = 1;
	base = "0123456789abcdef0123456789ABCDEF";
	if (n < 16)
	{
		write(1, &base[n + 16 * type], 1);
	}
	else
	{
		i += print_xX(n / 16, type);
		print_xX(n % 16, type);
	}
	return (i);
}
