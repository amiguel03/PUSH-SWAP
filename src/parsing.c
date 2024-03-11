/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:02:24 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/11 15:26:16 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_strlen(char *str, int i)
{
	while (str[i] != '\0')
		i++;
	return (i);
}

/*static int ft_isnumber(char *num)
{
	int	i;
	int simbol;
	
	i = 0;
	while(num[i] != '\0')
	{
		simbol = 0;
		while(num[i] != ' ' && num[i] != '\0')
		{
			if (simbol == 0 && (num[i] == '-' || num[i] == '+'))
			{
				i++;
				simbol++;
				if (simbol == 2 || num[i] == ' ' || num[i] == '\0')
					return (-1);
			}
			else if (ft_isdigit(num[i] == 1))
				i++;
		}
		while (num[i] == ' ')
			i++;
	}
	return (0);
}*/

void	check_number(char *num)
{
	int i;
	
	i = 0;
	if (num[i] == '-' || num[i] == '+')
		i++;
	if (num[i] == '\0')
		ft_error();
	printf("yd\n");
	while(num[i] != '\0')
	{
		if (ft_isdigit(num[i] == 0))
			ft_error();
		i++;
	}
}
