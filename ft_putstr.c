/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 13:48:59 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/22 18:18:34 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf_utils.h"

int	ft_putstr(char *s)
{
	int	bytes;
	int	result;
	int	i;

	bytes = 0;
	if (s == NULL)
		bytes += write(1, "(null)", 6);
	else
	{
		i = 0;
		while (s[i])
		{
			result = write(1, &s[i++], 1);
			if (result == -1)
				return (-1);
			bytes += result;
		}
	}
	return (bytes);
}
