/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:14:48 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/07 16:18:37 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write (2, "Error \n", 7);
	exit(EXIT_FAILURE);
}