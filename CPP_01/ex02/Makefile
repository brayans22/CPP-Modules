NAME = ex02
CC = c++
SRCS = main.cpp

OBJS = 			${SRCS:.cpp=.o}
CFLAGS = 		-Wall -Werror -Wextra -std=c++98

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) main.cpp -o $(NAME)

all: 		${NAME}

clean:
			rm -f ${OBJS}

fclean:	clean;
			rm -f ${NAME}

re:	fclean all

.PHONY: 	all clean fclean re