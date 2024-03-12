/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:02:24 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/12 11:50:31 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	check_number(char *num)
{
	int i;
	
	i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	if (num[i] == '\0')
		ft_error();
	while(num[i] != '\0')
	{
		if (ft_isdigit(num[i] == 0))
			ft_error();
		i++;
	}
}

int	ft_numdup(int num, t_list **stack_a)
{
	t_list *temp;
	
	if (stack_a == NULL)
		temp = NULL;
	else
		temp = *stack_a;
	while (temp != NULL)
	{
		if (temp->content == num)
			return(1);
		temp = temp->next;
	}
	return (0);
}
