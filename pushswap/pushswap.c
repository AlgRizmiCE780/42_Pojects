/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:02:59 by fmohamed          #+#    #+#             */
/*   Updated: 2026/02/08 16:21:35 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"


int main(int arg, char **argv)
{
    int len = arg - 1;
    // t_stack *stack_a = NULL;
    // t_stack *stack_b = NULL;
    // preprocessing(argv[1], &stack_a);

    // if (arg == 1)
    //     arg = 10; // defaulting the size to 10
    // newstack = malloc(sizeof(t_stack) * arg);

    // newstack = newstack->next;
    // // push(&newstack, 11, 1);
    // // push(&newstack, 1123, 2);
    // pop(&newstack);

    int *intar = convertToInt(argv, arg);

    int k = 0;
    
    while (len > 0)
    {
        ft_printf("%d ", intar[k]);
        k++;
        len--;
    }

    // int test=printf("%s",argv[2]);

    // ft_printf("\n test:%d ",test);
}