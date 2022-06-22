#-----DIRECTION

SRC_DIR		:= srcs/


#-----COMPILATION

CC				:=	gcc
CFLAGS			:=	-Wall -Werror -Wextra 
OPTIONS			:=	-c -I
ARCHIVE			:=	ar -crs
REMOVE			:= 	rm -f
COMPILER		:=	a.out

#-----FILES
NAME			:=	libftprintf.a

SRCS			:=	ft_putchar.c \
					ft_putnbr_base.c \
					ft_putstr.c \
					ft_strlen.c \
					utils.c \
					utilspart2.c \

FUNCTION		:=	ft_printf.c \

#-----RULES

OBJS		:= $(addprefix srcs/, ${SRCS:.c=.o}) 
OBJS		+= $(addprefix ./, ${FUNCTION:.c=.o})

.c.o:
			${CC} ${CFLAGS} -c -I./includes $< -o ${<:.c=.o}

${NAME}:		${OBJS}
				${ARCHIVE} ${NAME} ${OBJS}

all:			${NAME}

clean:	
				${REMOVE} ${OBJS}

fclean:			clean
				${REMOVE} ${NAME} ${COMPILER}

re:				fclean all

.PHONY:			all clean fclean re