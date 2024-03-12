/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:05:41 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/12 11:42:26 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_num
{
	int		first;
	int		second;
	int		third;
	int		fourth;
	int		fifth;
}			t_num;

typedef struct s_list
{
	int				content;
	int				index;
	struct s_list	*next;
}					t_list;

#endif