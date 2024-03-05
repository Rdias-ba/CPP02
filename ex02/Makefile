# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rdias-ba <rdias-ba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/24 13:47:59 by rdias-ba          #+#    #+#              #
#    Updated: 2024/03/05 07:07:04 by rdias-ba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex02
CC = c++
Flags = -Wextra -Werror -Wall -std=c++98
VPATH = srcs
Includes = -I ./headers

SRCS = main.cpp Fixed.cpp

OBJS = $(SRCS:%.cpp=$(OBJS_DIR)/%.o)
OBJS_DIR = objs

all: $(NAME)

$(NAME): $(OBJS_DIR) $(OBJS)
		$(CC) $(Flags) $(OBJS) -o $@

$(OBJS_DIR):
		mkdir -p $@

$(OBJS_DIR)/%.o: %.cpp
		$(CC) $(Flags) $(Includes) -c $< -o $@

clean:
		rm -rf $(OBJS_DIR)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re run
 