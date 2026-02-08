#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

#include "libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>


typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
}t_stack;


void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);


void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);


// Rotate operations
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);

// Reverse rotate operations
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);


//stack operations
/*
Push: Adds an element to the top of the stack.
Pop: Removes and returns the top element from the stack.
Peek (or Top): Returns the top element without removing it.
isEmpty: Checks if the stack is empty and returns a boolean result.
size: Returns the number of elements in the stack. 

*/

void push(t_stack **stack, int value, int index);
void pop(t_stack **stack);
int isEmpty(t_stack *stack);
int peek(t_stack *stack,int value,int index);
int size(t_stack *stack);

void memcpy(int * dest, int*src,int len);
int *convertToInt(char **input, int arg);
void freeAllStack(t_stack **stack);
void preProcessing(char **input,t_stack **stack,int arg);
int isValidInput(char *str);
int functionCaliculateDisorder(t_stack *stack);
void mergeArray(int *input, int left,int mid, int right);
void mergesort(int *input, int left, int right);

#endif
