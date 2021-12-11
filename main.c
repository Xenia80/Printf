#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	a = 'B';
	char	*str = "Hello,world";
	char	*p = &a;

	int b = ft_printf("a m_function = %c\n", a);
	ft_printf("a m_function = %d\n", b);
	int c = printf("a o_function = %c\n", a);
	printf("a o_function = %d\n", c);
	int d = ft_printf("str m_function = %s\n", str);
	ft_printf("str m_function = %d\n", d);
	int e = printf("str o_function = %s\n", str);
	printf("str o_function = %d\n", e);
	int f = ft_printf("int m_function = %u\n", -10);
	ft_printf("int m_function = %d\n", f);
	int g = printf("str o_function = %u\n", -10);
	printf("str o_function = %d\n", g);
	int h = ft_printf("int m_function = %i\n", -10);
	ft_printf("int m_function = %d\n", h);
	int i = printf("str o_function = %i\n", -10);
	printf("str o_function = %d\n", i);
	int j = ft_printf("int m_function = %X\n", 91);
	ft_printf("int m_function = %d\n", j);
	int k = printf("str o_function = %X\n", 91);
	printf("str o_function = %d\n", k);
	int l = ft_printf("int m_function = %p\n", p);
	ft_printf("int m_function = %d\n", l);
	int m = printf("str o_function = %p\n", p);
	printf("str o_function = %d\n", m);
	int n = ft_printf("int m_function = %%\n");
	ft_printf("int m_function = %d\n", n);
	int o = printf("str o_function = %%\n");
	printf("str o_function = %d\n", o);
}
