/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 18:40:29 by pnona             #+#    #+#             */
/*   Updated: 2021/12/05 19:57:25 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

static size_t	ft_length(unsigned int a)
{
	size_t	len;

	len = 0;
	if (a == 0)
		len = 1;
	while (a != 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

static void	ft_rev(char *str)
{
	size_t	i;
	size_t	len;
	char	buf;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i <= (len / 2))
	{
		buf = str[i];
		str[i] = str[len - i];
		str[len - i] = buf;
		i++;
	}
}

char	*ft_utoa(unsigned int n)
{
	size_t	len;
	char	*nstr;
	size_t	i;

	len = ft_length(n);
	nstr = (char *)malloc(len + 1);
	if (!nstr)
		return (NULL);
	if (n < 0)
		nstr[len - 1] = '-';
	if (n == 0)
		nstr[0] = '0';
	i = 0;
	while (n != 0)
	{
		nstr[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	nstr[len] = '\0';
	ft_rev(nstr);
	return (nstr);
}

int	print_u(unsigned int n)
{
	int		len;
	char	*rez_utoa;

	rez_utoa = ft_utoa(n);
	len = ft_strlen(rez_utoa);
	write (1, rez_utoa, len);
	free (rez_utoa);
	return (len);
}
