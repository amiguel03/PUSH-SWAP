/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:28:49 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/13 14:48:50 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	found_min(t_num *num, int size)
{
	int	i;
	int	temp;
	int	min;
	int	value;

	i = 1;
	min = 1;
	temp = num->first;
	value = num->first;
	while (i < size)
	{
		value = ((int *)num)[i++];
		if (temp > value)
		{
			temp = value;
			min = i;
		}
	}
	return (min);
}

void	ft_three(t_list **stack_a, t_list **stack_b, t_num *num, int size)
{
	ft_sethree(stack_a, num);
	if (num->first > num->second && num->first > num->third)
	{
		ft_rotate(stack_a, "ra\n");
		if (num->second > num->third)
			ft_swap(stack_a, "sa\n");
	}
	else if (num->first < num->second && num->second > num->third)
	{
		ft_reverse(stack_a, "rra\n");
		if (num->first < num->third)
			ft_swap(stack_a, "sa\n");
	}
	else if (num->first > num->second && num->second < num->third)
		ft_swap(stack_a, "sa\n");
	if (size >= 3)
	{
		ft_push(stack_b, stack_a, "pa\n");
		if (size == 4)
			ft_push(stack_b, stack_a, "pa\n");
	}
}

void	ft_move(t_list **stack_a, t_list **stack_b, int min, int size)
{
	if (min == 2)
		ft_swap(stack_a, "sa\n");
	else if (min == 3)
	{
		ft_rotate(stack_a, "ra\n");
		ft_rotate(stack_a, "ra\n");
	}
	else if (min == 4 && size == 4)
		ft_reverse(stack_a, "rra\n");
	else if (min == 4 && size == 5)
	{
		ft_reverse(stack_a, "rra\n");
		ft_reverse(stack_a, "rra\n");
	}
	else if (min == 5)
		ft_reverse(stack_a, "rra\n");
	ft_push(stack_a, stack_b, "pb\n");
}

void	ft_force(t_list **stack_a, t_list **stack_b, t_num *num, int size)
{
	int	min;
	
	if (size == 2)
		ft_swap(stack_a, "sa\n");
	else if (size == 3)
		ft_three(stack_a, stack_b, num, size);
	else if (size == 4)
	{
		ft_setfour(stack_a, num);
		min = found_min(num, size);
		ft_move(stack_a, stack_b, min, size);
		ft_three(stack_a, stack_b, num, size);
	}
	else if (size == 5)
	{
		ft_setfive(stack_a, num);
		min  = found_min(num, size);
		ft_move(stack_a, stack_b, min,  size--);
		ft_setfour(stack_a, num);
		min = found_min(num,size);
		ft_move(stack_a, stack_b, min, size);
		ft_three(stack_a, stack_b, num, size);
	}
}
