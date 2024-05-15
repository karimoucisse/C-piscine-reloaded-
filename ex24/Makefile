NAME = libft.a
SRC = srcs/
INCDIR = includes/
CFILES = $(SRC)ft_putchar $(SRC)ft_putstr $(SRC)ft_strcmp $(SRC)ft_strlen $(SRC)ft_swap
OBJS = $(CFILES:.c=.o)
HEADER = $(INCDIR)ft.h
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all = $(NAME)
$(NAME): $(OBJS)
	ar rcs ${NAME} $(OBJS)
%.o = %.c $(HEADER)
	$(cc) $(CFLAGS) -c $< -o $@ -I$(INCDIR)	
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re
