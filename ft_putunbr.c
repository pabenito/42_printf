/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:19:56 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 19:06:58 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf_utils.h"

int	ft_putunbr(unsigned int n)
{
	int		bytes;

	bytes = 0;
	if (n >= 10)
		bytes += ft_putunbr(n / 10);
	bytes += ft_putchar('0' + (int)(n % 10));
	return (bytes);
}
