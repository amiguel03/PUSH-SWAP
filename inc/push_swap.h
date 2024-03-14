/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:05:36 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/14 12:37:59 by amiguel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/******* Añado librerias ********/

# include <fcntl.h>
# include <limits.h>
# include <signal.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "structs.h"

# define BLUE "\033[0;34m"
/******* Añado funciones ********/

void	ft_error(void);
char	**ft_split(char const *s, char c);
int		ft_isdigit(char c);
t_list	*ft_lstnew(int content);
long	ft_atol(const char *str);
int		ft_lstordered(t_list **stack);
void	ft_clear_stack(t_list **stack);
int		ft_lstsize(t_list *lst);
void	check_number(char *num);
int		ft_numdup(int num, t_list **stack_a);
void	ft_lstadd_back(t_list **stack_a, t_list *new);
void	ft_new_node_num(int num, t_list **stack_a);
void	take_numbers(int argc, char **argv, t_list **stack_a);
void	ft_swap(t_list **stack, char *str);
void	ft_push(t_list **stack_a, t_list **stack_b, char *str);
void	ft_rotate(t_list **stack, char *str);
void	ft_reverse(t_list **stack, char *str);
int		found_min(t_num *num, int size);
void	ft_three(t_list **stack_a, t_list **stack_b, t_num *num, int size);
void	ft_move(t_list **stack_a, t_list **stack_b, int min, int size);
void	ft_force(t_list **stack_a, t_list **stack_b, t_num *num, int size);
void	ft_sethree(t_list **stack, t_num *num);
void	ft_setfour(t_list **stack, t_num *num);
void	ft_setfive(t_list **stack, t_num *num);
void	index_all(t_list **stack);

#endif