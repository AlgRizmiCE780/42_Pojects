/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmohamed <fmohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:03:10 by fmohamed          #+#    #+#             */
/*   Updated: 2026/02/08 20:31:13 by fmohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int *convertToInt(char **input, int len)
{

    if (len < 1)
    {
        ft_printf("ERROR:No Argument Passed,exited with 1");
        exit(1);
    }
    int i;
    int j;
    int *intarr = malloc(sizeof(int) * (len));
    if (!intarr)
    {
        ft_printf("ERROR:intarr creation failed,exited with 1");
        exit(1);
    }
    i = 1;
    j = 0;
    while (input[i] != NULL)
        intarr[j++] = ft_atoi(input[i++]);
    return intarr;
}

int isEmpty(t_stack *stack)
{
    return (stack == NULL);
}

int peek(t_stack *stack, int value, int index)
{

    if (!isEmpty(stack))
        return (stack->value);
    exit(1);
}

void push(t_stack **stack, int value, int index)
{

    t_stack *newnode;

    newnode = malloc(sizeof(t_stack));
    if (!newnode)
    {
        freeAllStack(stack);
        exit(1);
    }
    newnode->value = value;
    newnode->index = index;
    newnode->next = *stack;
    *stack = newnode;
}

void pop(t_stack **stack)
{
    if (isEmpty(*stack))
    {
        ft_printf("zsh: stackunderflow (exited with (1))");
        exit(1); // stack underflow
    }
    t_stack *head = *stack;
    head = head->next;
    head->next = NULL;
    *stack = head;
}

int size(t_stack *stack)
{
    int len = 0;
    if (isEmpty(stack))
        exit(1);
    while (stack->next != NULL)
        len++;
    if (stack->next == NULL)
        len = 1;
    return len;
}

void mergesort(int *inputArr, int left, int right)
{
    int mid;
    if (left >= right)
        return;
    mid = (left + right) / 2;

    mergesort(inputArr, left, mid);
    mergesort(inputArr, mid + 1, right);
    mergeArray(inputArr, left, mid, right);
}

void mergeArray(int *input, int left, int mid, int right)
{
    
}
void freeAllStack(t_stack **stack) // work on progress
{
    free(*stack);
}

int functionCaliculateDisorder(t_stack *stack) // work on progress
{
    int disorder = 0;

    return (disorder);
}

int isValidInput(char *str) // work on progress
{
    return 0;
}

void memcpyIntArray(int *dest, int *src, int len)
{
    int i;
    i = 0;
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
}

void preProcessing(char **input, t_stack **stack, int arg) // work on progress
{
    if (!isValidInput(input))
    {
        ft_printf("!ERROR");
        exit(1);
    }
    int len = arg - 1;
    int *intArr = convertToInt(input, arg);
    int left = 0;
    int right = len - 1;
    int *sortedIntArr = malloc(sizeof(int) * len);
    if(!sortedIntArr)
        exit(1);
    memcpy(sortedIntArr, intArr, len);
    mergesort(sortedIntArr, left, right);
    int *indexArr = getIndex(intArr, sortedIntArr);
}