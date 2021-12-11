NAME := libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

SRC := ft_cspdiuxX.c ft_print_f1.c ft_print_f2.c ft_printf.c 

OBJECTS := $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) ${NAME} $?

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
