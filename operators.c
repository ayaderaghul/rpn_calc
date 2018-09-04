/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:01:54 by lnguyen           #+#    #+#             */
/*   Updated: 2018/09/04 19:02:29 by lnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int f_plus(int a, int b)
{
    return (a + b);
}

int f_minus(int a, int b)
{
    return (a - b);
}

int f_mult(int a, int b)
{
    return (a * b);
}
int f_div(int a, int b)
{
    return (a / b);
}
int f_mod(int a, int b)
{
    return (a % b);
}

