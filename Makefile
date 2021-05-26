# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edassess <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 10:49:24 by edassess          #+#    #+#              #
#    Updated: 2021/05/26 11:50:03 by edassess         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #
#
NAME = pushswap.a

CC = cc
C_FLAGS = #-Wall -Wextra -Werror -fsanitize=address -g3

LFT_PATH = ./libft/
LFT_INC_PATH = ./libft/
OBJ_PATH = ./objs/
INC_PATH = ./includes/
SRC_PATH = ./srcs/

OBJ_NAME = $(SRC_NAME:.c=.o)
INC_NAME = pushswap.h
SRC_NAME = pushswap.c\
		   ft_parsing.c ft_push.c ft_rev_rotate.c\
		   ft_rotate.c ft_swap.c

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC = $(addprefix -I,$(INC_PATH)) $(addprefix -I,$(LFT_INC_PATH))

all: $(NAME)

$(NAME): $(OBJ)
	@make -C $(LFT_PATH)
	@ar rc $@ $(OBJ)
	@libtool -static -o $@ $@ $(LFT_PATH)libft.a
	@ranlib $@
	@echo "Obj folder & files created"
	@echo "Executable created"
	@echo "Compilation finished"

$(OBJ_PATH)%.o: $(SRC_PATH)%.c $(OBJ_PATH)
	@$(CC) $(C_FLAGS) $(INC) -o $@ -c $<

$(OBJ_PATH):
	@mkdir $(OBJ_PATH) 2> /dev/null || true

clean:
	@make clean -C $(LFT_PATH)
	@rm -rf $(OBJ_PATH) 2> /dev/null || true
	@echo "Obj folder & files suppressed"

fclean: clean
	@make fclean -C $(LFT_PATH)
	@rm -f $(NAME)
	@echo "Executable suppressed"

re: fclean
	@$(MAKE) all

norme:
	@norminette -R CheckForbiddenSourceHeader $(SRC)
	@echo "C files norme check finished"
	@norminette -R CheckDefine $(INC_PATH)
	@echo "Header files norme check finished"
