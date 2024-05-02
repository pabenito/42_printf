/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:51:04 by pbenito-          #+#    #+#             */
/*   Updated: 2024/03/22 18:21:14 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "_main_utils.h"
#include "ft_printf.h"
#include <stdio.h>

#define SIZE 5

int	main(void)
{
	char	*input[SIZE] = {"", "a", "Hola", "._*", "T E S T"};
	char	*format = "Print this string: \"%s\"";
	int		result;
	int		expected;
	int		i;

	printf("Function: ft_printf %%s\n");
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
		printf("Format: \"%s\"; Input: \"%s\"; Result: %d; Expected: %d\n", format, input[i], result, expected);
		fflush(stdout);
		reset_color();
		i++;
	}
}
