/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:00:16 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/14 12:37:18 by amiguel-         ###   ########.fr       */
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

