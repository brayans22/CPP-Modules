NAME = megaphone
CC = c++
SRCS = Megaphone.cpp

OBJS = 			${SRCS:.cpp=.o}

CFLAGS = 		-Wall -Werror -Wextra -std=c++98

%.o: %.cpp Makefile
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: 	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all: 		${NAME}

clean:
			rm -f ${OBJS}

fclean:	clean;
			rm -f ${NAME}

re:	fclean all

.PHONY: 	all clean fclean re