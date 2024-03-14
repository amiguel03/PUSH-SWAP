/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:00:16 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/14 14:58:51 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	index_all(t_list **stack)
{
	t_list	*temp;
	t_list	*aux;
	int		lst_size;
	int		index;
	int		i;

	i = -1;
	lst_size = ft_lstsize(*stack);
	temp = (*stack);
	while (++i < lst_size)
	{
		index = 0;
		aux = (*stack);
		while (aux)
		{
			if (temp->content > aux->content)
				temp->index = ++index;
			aux = aux->next;
		}
		temp = temp->next;
	}
}

static int	bitwise(int lst_size)
{
	int	i;
	
	i = 0;
	while ((lst_size - 1) >> i != 0)
		i++;
	return (i);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	lst_size;
	
	lst_size = ft_lstsize(*stack_a);
	i = 0;
	index_all(stack_a);
	while (i < bitwise(lst_size))
	{
		j = 0;
		while (j < lst_size)
		{
			if (((*stack_a)->index >> i & 1) == 1)
				ft_rotate(stack_a, "ra\n");
			else if (((*stack_a)->index >> i & 1) == 0)
				ft_push(stack_a, stack_b, "pb\n");
			j++;
		}
		while (ft_lstsize(*stack_b) != 0)
			ft_push(stack_b, stack_a, "pa\n");
		i++;
	}
}
