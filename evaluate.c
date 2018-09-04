/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:32:33 by lnguyen           #+#    #+#             */
/*   Updated: 2018/09/04 21:46:30 by lnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

void print_array(int *array, int size)
{
	int i;
	i = 0;
	while (i < size)
	{
		printf("%d, ",array[i]);
		++i;
	}
	printf("\n");
}

int evaluate(char *str, t_operation *array)
{
    int n = 0;
    int l = 0;
    int j = 0;
    n = numbers(str);
    l = length (str);

    char *rest;
    int narray[n];
    int i = 0;
	while (i < n)
	{
		narray[i] = 0;
		++i;
	}
	i = 0;

    rest = str;

    while (i < l)
    {
        if (is_it_number(str[i]) == 1)
            ++i;
        if (str[i] == ' ')
        {
            narray[j] = atoi(rest);
            ++i;
            ++j;
            rest = str + i;
        }
        if (is_it_operator(str[i]) == 1)
        {
			j--;
			j = do_op(str[i],array,narray,j);
			i = i + 2;
			rest = str + i;
        }

    }
    return (narray[0]);
}
