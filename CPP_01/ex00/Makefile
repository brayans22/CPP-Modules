NAME = ex00
CC = c++
SRCS = Zombie.cpp main.cpp randomChump.cpp newZombie.cpp

OBJS = 			${SRCS:.cpp=.o}
CFLAGS = 		-Wall -Werror -Wextra -std=c++98

${NAME}:	$(OBJS)
			$(CC) $(CFLAGS) Zombie.cpp main.cpp randomChump.cpp newZombie.cpp -o $(NAME)

all: 		${NAME}

clean:
			rm -f ${OBJS}

fclean:	clean;
			rm -f ${NAME}

re:	fclean all

.PHONY: 	all clean fclean re