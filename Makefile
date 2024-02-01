# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albrusso <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 14:16:03 by albrusso          #+#    #+#              #
#    Updated: 2022/11/14 15:35:52 by albrusso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
################################################################################
#                                  CONFIG                                      #
################################################################################

NAME	=	libftprintf.a
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra -I.
RM		=	rm -f
LIBFT	=	libft

################################################################################
#                                  COLORS                                      #
################################################################################

GREEN	=	\033[38;5;76m
RED		=	\033[38;5;160m
YELLOW	=	\033[38;5;226m
ORANGE	=	\033[38;5;202m
PURPLE	=	\033[38;5;213m
LBLUE	=	\033[38;5;51m
BLUE	=	\033[38;5;117m
INDI	=	\033[38;5;99m
RESET	=	\033[00m

################################################################################
#                                   FILES                                      #
################################################################################

SRCS	=	ft_is_c.c      \
			ft_is_d_or_i.c \
			ft_is_p.c      \
			ft_is_s.c      \
			ft_is_u.c      \
			ft_is_x_or_X.c \
			ft_printf.c

################################################################################
#                                   MAKE                                       #
################################################################################

OBJS	=	$(SRCS:.c=.o)

all:		header $(NAME)

header:
	@echo "$(ORANGE)Name:$(RESET)    ft_printf"
	@echo "$(ORANGE)Author:  $(RESET)albrusso$(RESET)"
	@echo "$(ORANGE)Version: $(RESET)v 1.0$(RESET)"
	@echo

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@ ar rcs $(NAME) $(OBJS)
			@echo "$(BLUE)ft_printf $(GREEN)compiled!$(RESET)"

clean:
			@make clean -C $(LIBFT)
			@ $(RM) $(OBJS)
			@echo "$(BLUE)ft_printf objects file $(YELLOW)removed!$(RESET)"

fclean:		clean
			@ $(RM) libft/libft.a
			@echo "$(BLUE)libft.a $(YELLOW)removed!$(RESET)"
			@ $(RM) $(NAME)
			@echo "$(BLUE)libftprintf.a $(YELLOW)removed!$(RESET)"

re:			fclean all

PHONY:		all header clean fclean re

.SILENT:
