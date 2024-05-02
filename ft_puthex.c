/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:38:51 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 18:16:10 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
#include <unistd.h>

int	ft_puthex(unsigned int n, int is_upper)
{
	int		bytes;
	char	*base;

	if (is_upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	bytes = 0;
	if (n >= 16)
		bytes += ft_puthex(n / 16, is_upper);
	bytes += ft_putchar(base[n % 16]);
	return (bytes);
}
