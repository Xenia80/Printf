NAME	=	libftprintf.a

CC	=	 cc

CFLAGS	=	 -Werror -Wall -Wextra

AR	=	 ar -rcs

SRC		=	 ft_functions.c 	\
			 ft_itoa.c 			\
			 ft_printf.c 		\
			 ft_utoa.c 			\

OBJS	 =	$(SRC:%.c=%.o)

all	:	$(NAME)

$(NAME)	: 	$(OBJS) ft_printf.h
	$(AR) $(NAME) $(OBJS)

%.o	:	%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	rm -rf $(OBJS)

fclean	: 	clean
	rm -rf $(NAME)

re	:	fclean all

.PHONY: clean fclean all re