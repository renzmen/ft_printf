# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrenzett <lrenzett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 16:48:30 by lrenzett          #+#    #+#              #
#    Updated: 2023/05/11 22:50:44 by lrenzett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

OBJS := ft_printf.o ft_printf_utilities.o

FLAGS := -Wall -Wextra -Werror

all: $(NAME)

%.o : %.c
	gcc $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) ${B_OBJS}

fclean: clean
	rm -f $(NAME)

re: fclean all