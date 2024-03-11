/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:05:36 by amiguel-          #+#    #+#             */
/*   Updated: 2024/03/11 15:18:48 by amiguel-         ###   ########.fr       */
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
void		check_number(char *argv);
int		ft_isdigit(char c);
char	**ft_split(char const *s, char c);

#endif