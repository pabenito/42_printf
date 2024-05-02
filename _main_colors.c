/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main_colors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbenito- <pbenito-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 20:22:46 by pbenito-          #+#    #+#             */
/*   Updated: 2023/12/16 12:24:31 by pbenito-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "_main_utils.h"

void	set_text_color(int color_code)
{
	printf("\033[%dm", color_code);
}

void	set_green(void)
{
	set_text_color(32);
}

void	set_red(void)
{
	set_text_color(31);
}

void	reset_color(void)
{
	set_text_color(0);
}
