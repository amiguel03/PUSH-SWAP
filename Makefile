# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguel- <amiguel-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/30 14:15:28 by amiguel-          #+#    #+#              #
#    Updated: 2024/03/14 12:37:47 by amiguel-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAMES
NAME = push_swap

SRC_DIR		=	src/

SRC_FILES	=	main.c \
				moves.c \
				radix.c \
				parsing.c \
				ft_split.c \
				hardcode.c \
				functions.c \
				hardcode2.c \
				functions2.c \
				radix.c \
			
				
SRC			=	$(addprefix $(SRC_DIR), $(SRC_FILES))

# OBJECT FILES
OBJ_FILES		= $(SRC:.c=.o)

# COMPILER OPTIONS
CC		= gcc
FLAGS	= -Wall -Werror -Wextra
INCLUDE	= -I inc
RM		= rm -f

#COLORS
RED		=	\033[91;1m
GREEN	=	\033[92;1m
YELLOW	=	\033[93;1m
BLUE	=	\033[94;1m
PINK	=	\033[95;1m
CLEAR	=	\033[0m

# MAKEFILE RULES
%.o: %.c
		@echo "${BLUE}◎ Compiling ${PINK} →$(CLEAR)"
		${CC} ${FLAGS} -c -o $@ $<

all:	${NAME}

${NAME}: ${OBJ_FILES}
	${CC} $(INCLUDE) ${SRC} -o ${NAME}
	@echo "\n$(GREEN) Created $(NAME) ✓ $(CLEAR)\n"

# bonus: ${BONUS_OBJS}
# 				@touch $@
# 				@${CC} ${SRC_BONUS} -o ${NAME_BONUS}
# 				@echo "\n$(GREEN)Created ${NAME_BONUS} ✓$(CLEAR)\n"

clean:
			${RM} ${OBJ_FILES}
			@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(CLEAR)\n"

fclean: 
			${RM} ${OBJ_FILES}
			${RM} ${NAME}
			@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(CLEAR)\n"

re: fclean all

.PHONY: all clean fclean re