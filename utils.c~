/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:07:08 by lnguyen           #+#    #+#             */
/*   Updated: 2018/09/04 21:42:32 by lnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int length(char *str)
{
    int i = 0;
    while (str[i])
        ++i;
    return (i);
}

int ft_compare(char c1, char c2)
{
	if (c1 == c2)
		return 1;
    return 0;
}

int is_it_number(char c)
{
    if ('0' <= c && c <= '9')
        return 1;
    return 0;
}

int is_it_operator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
        return 1;
    return 0;
}

int numbers(char *str)
{
    int i;
    int n;
	int l = 0;
	l = length(str);
    n = 0;
    i = 0;
    while (i < l)
    {
        if (is_it_number(str[i]) == 1)
            ++i;
        if (str[i] == ' ' || i == l)
		{
            ++n;
			++i;
		}
		if (is_it_operator(str[i]) == 1)
		{
			i = i + 2;
		}
    }
    return (n);
}

int operators(char *str)
{
    int i;
    int o;
    i = 0;
    o = 0;
    while (str[i])
    {
        if (is_it_operator(str[i]) == 1)
            ++o;
        ++i;
    }
    return (o);
}

int valid(char *str)
{
    int o = 0;
    int n = 0;
    o = operators(str);
    n = numbers(str);
    if (n == o + 1)
        return (1);
    return (0);
}


void init(t_operation *array)
{
    array[0].x = '+';
    array[0].f = &f_plus;
    array[1].x = '-';
    array[1].f = &f_minus;
    array[2].x = '*';
    array[2].f = &f_mult;
    array[3].x = '/';
    array[3].f = &f_div;
    array[4].x = '%';
    array[4].f = &f_mod;
}

int do_op(char s1, t_operation *array, int *narray, int j)
{
	int k = 0;
	while (k < 5)
	{
		if (ft_compare(s1,array[k].x) == 1)
		{
			narray[j-1] = (*array[k].f)(narray[j-1],narray[j]);
			narray[j] = 0;
		}
		++k;
	}
	return j;
}
