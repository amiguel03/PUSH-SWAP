/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hardcode2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 14:48:15 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/13 14:58:15 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sethree(t_list **stack, t_num *num)
{
	t_list *current;

	current = *stack;
	num->first = current->content;
	num->second = current->next->content;
	num->third = current->next->next->content;
	num->fourth = 0;
	num->fifth = 0;
}

void	ft_setfour(t_list **stack, t_num *num)
{
	t_list *current;

	current = *stack;
	ft_sethree(&current, num);
	num->fourth = current->next->next->next->content;
}

void	ft_setfive(t_list **stack, t_num *num)
{
	t_list *current;

	current = *stack;
	ft_setfour(&current, num);
	num->fifth = current->next->next->next->next->content;
}
