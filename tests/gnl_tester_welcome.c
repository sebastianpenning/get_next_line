/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tester_welcome.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mynodeus <mynodeus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:03:23 by spenning          #+#    #+#             */
/*   Updated: 2024/05/17 17:37:58 by mynodeus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gnl_tester.h"

void	welcome_screen_end(void)
{
	printf(CYN "<==========================================" RESET);
	printf(CYN "========================================>\n" RESET);
	printf(CYN "+                                          " RESET);
	printf(CYN "                                        +\n" RESET);
	printf(CYN "+                             " RESET);
	printf(YEL "get_next_line " RESET);
	printf(CYN " tester" RESET);
	printf(CYN "                                +\n" RESET);
	printf(CYN "+                                  by spenning" RESET);
	printf(CYN "                                     +\n" RESET);
	printf(CYN "+                                          " RESET);
	printf(CYN "                                        +\n" RESET);
	printf(CYN "<=============================================" RESET);
	printf(CYN "=====================================>\n" RESET);
}

void	welcome_screen_begin(void)
{
	printf(CYN "<==========================================" RESET);
	printf(CYN "========================================>\n" RESET);
	printf(CYN "||                                         " RESET);
	printf(CYN "                                       ||\n" RESET);
	printf(CYN "||    ||      |      ||  ||||||  ||     |||||" RESET);
	printf(CYN "   ||||||    |||| |||||   ||||||     ||\n" RESET);
	printf(CYN "||    ||     |||     ||  ||      ||    ||    " RESET);
	printf(CYN "  ||    ||  ||   ||   ||  ||         ||\n" RESET);
	printf(CYN "||    ||    || ||    ||  ||||||  ||    ||    " RESET);
	printf(CYN "  ||    ||  ||   ||   ||  ||||||     ||\n" RESET);
	printf(CYN "||     ||  ||   ||  ||   ||      ||    ||    " RESET);
	printf(CYN "  ||    ||  ||   ||   ||  ||         ||\n" RESET);
	printf(CYN "||      ||||     ||||    ||||||  |||||  |||||" RESET);
	printf(CYN "   ||||||   ||   ||   ||  ||||||     ||\n" RESET);
	printf(CYN "||                                           " RESET);
	printf(CYN "                                     ||\n" RESET);
}

int	main(void)
{
	welcome_screen_begin();
	welcome_screen_end();
	return (0);
}
