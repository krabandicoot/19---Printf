SRCS		=	ft_print.c \
				srcs/*.c \

NAME		=	libftprintf.a
OBJS		=	*.o
OPTIONS		=	-c -I
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra 

OBJS:		
			${CC} ${CFLAGS} ${OPTIONS} ${SRCS}

${NAME}:	${OBJS}
			ar -rcs $@ $^

all:		${NAME}

clean:	
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean
			${MAKE}

.PHONY:		all bonus clean fclean re