# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: seruiz <marvin@le-101.fr>                  +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2020/01/07 10:58:35 by seruiz       #+#   ##    ##    #+#        #
#    Updated: 2020/01/07 14:05:13 by seruiz      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = cube3d.a

CC = gcc

FLAGS = -Wall -Wextra

LIB = includes/cube3d.h

SRC = ft_cube3d.c

LIBOBJ = minilibx/mlx_init_loop.o			\
		 minilibx/mlx_int_str_to_wordtab.o	\
		 minilibx/mlx_mouse.o				\
		 minilibx/mlx_new_image.o			\
		 minilibx/mlx_new_window.o			\
		 minilibx/mlx_png.o					\
		 minilibx/mlx_shaders.o				\
		 minilibx/mlx_xpm.o					

OBJ = $(SRC:%.c=%.o)

all : test $(NAME)

test :
	$(MAKE) -C minilibx

bonus : $(NAME)

re : fclean all

libclean :
	$(MAKE) -C minilibx clean

%.o : %.c $(LIB)
	$(CC) -c -o $@ $< $(FLAGS)

$(NAME) : $(OBJ) $(LIB)
	ar rcs $(NAME) $(OBJ) minilibx/libmlx.a $(LIB)

clean :
	rm -f $(OBJ) $(LIBOBJ)

fclean : clean libclean
	rm -f $(NAME)

.PHONY : clean all re fclean
