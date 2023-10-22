NAME = so_long

CC = gcc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror

LIBFT = 	./sources/libft/ft_strlen.c						\
			./sources/libft/ft_strrchr.c					\
			./sources/libft/ft_strncmp.c					\
			./sources/libft/libft.h

CHECKERS = 	./sources/checkers/argument_count_checker.c		\
			./sources/checkers/map_checker.c				\
			./sources/checkers/checkers.h

SOURCES = 	./sources/main.c 								\
			./sources/so_long.h								\
			$(LIBFT) $(CHECKERS)
			

so_long: $(SOURCES) Makefile
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
	@echo $(NAME) compiled.

clean:
	@$(RM) $(NAME)
	@echo $(NAME) terminated.

fclean: clean

re:
	@$(RM) $(NAME)
	@$(CC) $(CFLAGS) $(SOURCES) -o $(NAME)
	@echo $(NAME) recompiled.

help:
	@echo "Usage: ./so_long maps/<map-name>"

.PHONY: clean fclean re
