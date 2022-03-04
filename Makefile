# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Cerdelen < cerdelen@student.42wolfsburg.de +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/04 15:31:04 by Cerdelen          #+#    #+#              #
#    Updated: 2022/03/04 15:31:05 by Cerdelen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = get_next_line.a
SRCS = get_next_line.c get_next_line_utils.c
OBJS = $(SRCS.c=.o)

all : $(NAME)

%.o : %.c 
	$(CC) $(CFLAGS) -c $(SRCS) -o $(OBJS)

$(NAME) : $(OBJS)
	ar rcs $(OBJS) $(NAME)

clean: 
	rm -f $(OBJS)

fclean : clean
	rm -f (NAME)

re : fclean all 
