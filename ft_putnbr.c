/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:50:05 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 18:44:56 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf_utils.h"

int	ft_putnbr(int n)
{
	int		bytes;

	bytes = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		bytes += ft_putchar('-');
		return (ft_putnbr(-n) + bytes);
	}
	if (n >= 10)
		bytes += ft_putnbr(n / 10);
	bytes += ft_putchar('0' + n % 10);
	return (bytes);
}
