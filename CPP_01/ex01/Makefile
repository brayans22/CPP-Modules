NAME = ex01
CC = c++
SRCS = Zombie.cpp main.cpp randomChump.cpp

OBJS = 			${SRCS:.cpp=.o}
CFLAGS = 		-Wall -Werror -Wextra -std=c++98

%.o: %.cpp Makefile Zombie.hpp
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