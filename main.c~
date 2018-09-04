/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 10:38:28 by lnguyen           #+#    #+#             */
/*   Updated: 2018/09/04 19:33:01 by lnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"


int main(int ac, char **av)
{
	int r = 0;
	t_operation array[5];
	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return 0;
	}
	init((t_operation*)array);
	if (valid(av[1]) == 1)
	{
		r = evaluate(av[1], array);
		printf("%d\n",r);
	}
	else
		write(1,"Error\n", 6);
	return 0;
}
