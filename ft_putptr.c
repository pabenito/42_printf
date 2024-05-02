/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:23:04 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 18:49:50 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf_utils.h"

int	ft_puthex_long(unsigned long n, int is_upper)
{
	int		bytes;
	char	*base;

	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	bytes = 0;
	if (n >= 16)
		bytes += ft_puthex_long(n / 16, is_upper);
	bytes += ft_putchar(base[n % 16]);
	return (bytes);
}

int	ft_putptr(void *p)
{
	int	bytes;

	bytes = 0;
	bytes += ft_putstr("0x");
	bytes += ft_puthex_long((unsigned long)p, 0);
	return (bytes);
}
