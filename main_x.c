/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:51:04 by pbenito-          #+#    #+#             */
/*   Updated: 2024/04/02 18:27:24 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "ft_printf.h"
#include <stdio.h>

#define SIZE 6

int	main(void)
{
	unsigned int	input[SIZE] = {0, 1, 10, 15, 16, 17};
	char			*format = "Print this hexadecimal: %x";
	int				result;
	int				expected;
	int				i;

	printf("Function: ft_printf %%x\n");
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
		printf("Format: \"%s\"; Input: %u; Result: %d; Expected: %d\n", format, input[i], result, expected);
		fflush(stdout);
		reset_color();
		i++;
	}
}
