# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kskostyl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/11 20:50:52 by kskostyl          #+#    #+#              #
#    Updated: 2018/11/11 20:54:37 by kskostyl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAG) *.c
	gcc -o $(NAME) $(FLAG) *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
