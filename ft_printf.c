/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:34:10 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 19:04:55 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "ft_printf_utils.h"

int	put_format(char format, va_list	args)
{
	int	bytes;

	bytes = 0;
	if (format == 'c')
		bytes = ft_putchar(va_arg(args, int));
	else if (format == 's')
		bytes = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		bytes = ft_putptr(va_arg(args, void *));
	else if (format == 'd')
		bytes = ft_putnbr(va_arg(args, int));
	else if (format == 'i')
		bytes = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		bytes = ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x')
		bytes = ft_puthex(va_arg(args, unsigned int), 0);
	else if (format == 'X')
		bytes = ft_puthex(va_arg(args, unsigned int), 1);
	else if (format == '%')
		bytes = ft_putchar('%');
	return (bytes);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		bytes;
	int		i;

	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, format);
	bytes = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			bytes += put_format(format[++i], args);
		else
			bytes += ft_putchar(format[i]);
		i++;
	}
	return (bytes);
}
