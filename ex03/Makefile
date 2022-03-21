NAME = Weapon 
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

MAIN = main.cpp

SRC = HumanA.cpp\
	  HumanB.cpp\
	  Weapon.cpp\

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(MAIN) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./$(NAME)

.PHONY:	all clean fclean re test
