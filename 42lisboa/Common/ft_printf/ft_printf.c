/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thde-sou <thde-sou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 21:08:15 by thde-sou          #+#    #+#             */
/*   Updated: 2025/05/16 20:52:42 by thde-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	if (format == 'c')
		return (put_char(va_arg(args, int)));
	else if (format == 's')
		return (put_str(va_arg(args, char *)));
	else if (format == 'p')
		return (put_pointer(va_arg(args, void *)));
	else if (format == 'd' || format == 'i')
		return (put_int(va_arg(args, int)));
	else if (format == 'u')
		return (put_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x')
		return (put_hex(va_arg(args, unsigned int)));
	else if (format == 'X')
		return (put_hex_upper(va_arg(args, unsigned int)));
	else if (format == '%')
		return (put_porcent('%'), 1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		a;
	int		total;

	a = 0;
	total = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[a])
	{
		if (format[a] == '%' && format[a + 1])
		{
			total += ft_format(args, format[a + 1]);
			a += 2;
		}
		else if (format[a] == '%' && !format[a + 1])
			break ;
		else
			put_format(&a, &total, format[a]);
	}
	va_end(args);
	return (total);
}

/* int	(*print_pointer)(const char*, ...);

int	main(void)
{
	int		a;
	int		b;
	char	*str;
	char	c;
	int		num;
	int		hex;

	c = 'A';
	str = "string test";
	num = -2147483648;
	hex = 2556;
	print_pointer = printf;

	a = 0;
	b = 0;
	printf("=============\n");
	a = ft_printf("char: %c\n", c);
	ft_printf("%d\n", a);
	b = print_pointer("char: %c\n", c);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("string: %s\n", str);
	ft_printf("%d\n", a);
	b = print_pointer("string: %s\n", str);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("pointer: %p\n", &str);
	ft_printf("%d\n", a);
	b = print_pointer("pointer: %p\n", &str);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("decimal: %d\n", num);
	ft_printf("%d\n", a);
	b = print_pointer("decimal: %d\n", num);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("inteiro: %i\n", num);
	ft_printf("%d\n", a);
	b = print_pointer("inteiro: %i\n", num);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("unsigned: %u\n", num);
	ft_printf("%d\n", a);
	b = print_pointer("unsigned: %u\n", num);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("hexadecimal: %x\n", hex);
	ft_printf("%d\n", a);
	b = print_pointer("hexadecimal: %x\n", hex);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("HEXADECIMAL: %X\n", hex);
	ft_printf("%d\n", a);
	b = print_pointer("HEXADECIMAL: %X\n", hex);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n=============\n");
	a = ft_printf("porcent: %%\n");
	ft_printf("%d\n", a);
	b = print_pointer("porcent: %%\n");
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n======= TEST COM NULL ======\n\n");
	a = ft_printf(NULL, hex);
	ft_printf("%d\n", a);
	b = print_pointer(NULL, hex);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n======= TEST COM NULL ======\n");
	a = ft_printf("NULL string: %s\n", NULL);
	ft_printf("%d\n", a);
	b = print_pointer("NULL string: %s\n", NULL);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n======= TEST COM NULL ======\n");
	a = ft_printf("NULL pointer: %p\n", NULL);
	ft_printf("%d\n", a);
	b = print_pointer("NULL pointer: %p\n", NULL);
	print_pointer("%d\n", b);

	a = 0;
	b = 0;
	printf("\n======= TEST COM ZERO ======\n");
	a = ft_printf("ZERO: %d\n", 0);
	ft_printf("%d\n", a);
	b = print_pointer("ZERO: %d\n", 0);
	print_pointer("%d\n", b);
	return (0);
} */
