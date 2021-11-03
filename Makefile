# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ybakker <ybakker@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/28 16:04:32 by ybakker       #+#    #+#                  #
#    Updated: 2021/11/03 01:46:59 by ybakker       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Karen

SRC = main.c\
		ft_strlen.c

OBJ	= $(SRC:.cpp=.o)
CCFLAG = gcc
CPPFLAGS = -Wall -Wextra -Werror -I.

.PHONY: all clean fclean re test

all: $(NAME)
$(NAME): $(OBJ)
	$(CCFLAG) $(CPPFLAGS) -o $(NAME) $(OBJ)
clean:
	rm -rf $(OBJ)
fclean: clean
	@$(RM) $(NAME)
	@rm -f $(NAME)
re: fclean all

st:
	./$(NAME)
