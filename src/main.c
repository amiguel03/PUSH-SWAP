/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:11:43 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/12 12:50:03 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write (2, "Error \n", 7);
	exit(EXIT_FAILURE);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	if (argc < 2)
		return (0);
	take_numbers(argc, argv, &stack_a);
	if (ft_lstordered(&stack_a) == 1)
		return (0);
	size = ft_lstsize(stack_a);
	return (0);
}
