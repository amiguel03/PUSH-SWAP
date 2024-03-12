/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:11:43 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/12 11:44:58 by amiguel-         ###   ########.fr       */
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
	char	 **nb;
	int x;
	int i = 1;

	stack_a = NULL;
	stack_b = NULL;
	nb = NULL;
	
	if (argc == 1)
		ft_error();
	while (argv[i] != NULL)
	{
		x = 0;
		nb = ft_split(argv[i++], ' ');
		if(nb == NULL)
			ft_error();
		while (nb[x] != NULL)
			check_number(nb[x++]);
	}
	return (0);
}