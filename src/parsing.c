/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:02:24 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/12 12:43:23 by amiguel-         ###   ########.fr       */
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

void	ft_lstadd_back(t_list **stack_a, t_list *new)
{
	t_list *temp_list;
	
	temp_list = *stack_a;
	if (temp_list == NULL)
	{
		*stack_a = new;
		return ;
	}
	while (temp_list->next != NULL)
		temp_list = temp_list->next;
	temp_list->next = new;
}

void ft_new_node_num(int num, t_list **stack_a)
{
	t_list	*new;
	
	if (ft_numdup(num, stack_a) == 1)
		ft_error();
	new = ft_lstnew(num);
	ft_lstadd_back(stack_a, new);
}

void	take_numbers(int argc, char **argv, t_list **stack_a)
{
	int		i;
	int		j;
	char	**array;
	long	num;
	
	i = 1;
	while (i != argc)
	{
		j = 0;
		array = ft_split(argv[i], ' ');
		if (array[j] == NULL)
			ft_error();
		while (array[j] != NULL)
		{
			check_number(array[j]);
			num = ft_atol(array[j]);
			if (num == (long) INT_MAX +1)
				ft_error();
			ft_new_node_num(num, stack_a);
			free(array[j]);
			j++;
		}
		free(array);
		i++;		
	}
}
