/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rpn_calc.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnguyen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:02:51 by lnguyen           #+#    #+#             */
/*   Updated: 2018/09/04 21:37:39 by lnguyen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef RPN_CALC_H
# define RPN_CALC_H

#include <unistd.h>
#include <stdlib.h>
#include <libc.h>

typedef int (*t_fptr)(int, int);
typedef struct s_operation
{
    char x;
    t_fptr f;
} t_operation;

int length(char *str);
int ft_compare(char c1, char c2);

int is_it_number(char c);
int numbers(char *str);
int is_it_operator(char c);
int operators(char *str);
int valid(char *str);


int f_plus(int a, int b);
int f_minus(int a, int b);
int f_mult(int a, int b);
int f_div(int a, int b);
int f_mod(int a, int b);

void init(t_operation *array);

int do_op(char s1,t_operation *array,int *narray,int j);

int evaluate(char *str, t_operation *array);

#endif
