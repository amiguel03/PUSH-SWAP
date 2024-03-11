/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:54:58 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/11 11:55:58 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

long	ft_atol(const char *str)
{
	long	i;
	long	num;
	long	sing;

	i = 0;
	num = 0;
	sing = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str [i] == '+')
	{
		if (str[i] == '-')
			sing = -1;
		i++;
	}
	while (ft_isdigit((int) str[i]) != 0)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * sing);
}
