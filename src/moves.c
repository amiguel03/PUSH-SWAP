/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:45 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/14 15:10:01 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_swap(t_list **stack, char *str)
{
	t_list	*current;
	int		temp;
	
	current = *stack;
	if (current == NULL)
		return ;
	temp = current->content;
	current->content = current->next->content;
	current->next->content = temp;
	write (1, str, 3);
}

void	ft_push(t_list **stack_a, t_list **stack_b, char *str)
{
	t_list *temp;
	
	if (*stack_a != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		if (*stack_b == NULL)
			*stack_b = temp;
		else
		{
			temp->next = *stack_b;
			*stack_b = temp;
		}
	}
	write (1, str, 3);
}

void	ft_rotate(t_list **stack, char *str)
{
	t_list	*current;
	t_list	*temp;
	
	current = *stack;
	(*stack) = (*stack)->next;
	current->next = NULL;
	temp = *stack;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = current;
	write (1, str, 3);
}

void	ft_reverse(t_list **stack, char *str)
{
	t_list	*current;
	int		temp;
	int		temp2;
	
	current = *stack;
	while (current->next != NULL)
		current = current->next;
	temp = current->content;
	current = *stack;
	while (current->next != NULL)
	{
		temp2 = current->content;
		current->content = temp;
		temp = temp2;
		current = current->next;
	}
	current->content = temp2;
	write (1, str, 4);
}
