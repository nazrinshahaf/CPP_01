NAME = Zombie
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

SRC = Zombie.cpp\
	  randomChump.cpp\
	  newZombie.cpp

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./Zombie

.PHONY:	all clean fclean re test
