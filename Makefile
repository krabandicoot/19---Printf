SRCS		=	srcs/*.c \
				ft_printf.c \

NAME		=	libftprintf.a
OBJS		=	*.o
OPTIONS		=	-c -I
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra 

${NAME}:	${OBJS}
			ar -crs ${NAME} ${OBJS}
${OBJS}:
			${CC} ${CFLAGS} ${OPTIONS} ${SRCS}

all:		${NAME}

clean:	
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all bonus clean fclean re