#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/09/13 23:14:40 by lmarques          #+#    #+#             *#
#*   Updated: 2017/09/13 23:31:12 by lmarques         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME_COLLEEN = Colleen
NAME_GRACE = Grace
NAME_SULLY = Sully

SRC_COLLEEN = Colleen.c
SRC_GRACE = Grace.c
SRC_SULLY = Sully.c

OBJ_COLLEEN = Colleen.o
OBJ_GRACE = Grace.o
OBJ_SULLY = Sully.o

all: $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COLLEEN): $(OBJ_COLLEEN)
		gcc -Wall -Wextra -Werror -c $(SRC_COLLEEN)
		gcc -Wall -Wextra -Werror $(OBJ_COLLEEN) -o $(NAME_COLLEEN)

$(NAME_GRACE): $(OBJ_GRACE)
		gcc -Wall -Wextra -Werror -c $(SRC_GRACE)
		gcc -Wall -Wextra -Werror $(OBJ_GRACE) -o $(NAME_GRACE)

$(NAME_SULLY): $(OBJ_SULLY)
		gcc -Wall -Wextra -Werror -c $(SRC_SULLY)
		gcc -Wall -Wextra -Werror $(OBJ_SULLY) -o $(NAME_SULLY)

clean:
		rm -rf $(OBJ_COLLEEN) $(OBJ_GRACE) $(OBJ_SULLY)

fclean: clean
		rm -rf $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

re: fclean all
