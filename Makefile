SRCS =	ft_convhexamaj.c	\
	ft_convhexamin.c	\
	ft_convhexap.c		\
	ft_convhexapp.c		\
	ft_printf.c		\
	ft_putcharlen.c		\
	ft_putnbrlen.c		\
	ft_putnbrlenu.c		\
	ft_putstrlen.c
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
OBJS = ${SRCS:.c=.o}


NAME = libftprintf.a

all : ${NAME}

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS}
	echo "Partie obligatoire faite !"

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all


.PHONY: all, clean, fclean, re
