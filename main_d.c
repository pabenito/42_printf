/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:51:04 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 18:40:24 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "ft_printf.h"
#include <stdio.h>

#define SIZE 9

int	main(void)
{
	int		input[SIZE] = {0, 1, -1, 2, -2, 10, -10, -2147483648, 2147483647};
	char	*format = "Print this decimal number: %d";
	int		result;
	int		expected;
	int		i;

	printf("Function: ft_printf %%d\n");
	i = 0;
	while (i < SIZE)
	{
		printf("Function: ft_printf - ");
		fflush(stdout);
		result = ft_printf(format, input[i]);
		printf("\n");
		fflush(stdout);
		printf("Function: printf - ");
		fflush(stdout);
		expected = printf(format, input[i]);
		fflush(stdout);
		printf("\n");
		fflush(stdout);
		if (result == expected)
			set_green();
		else
			set_red();
		printf("Format: \"%s\"; Input: %d; Result: %d; Expected: %d\n", format, input[i], result, expected);
		fflush(stdout);
		reset_color();
		i++;
	}
}
