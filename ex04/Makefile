NAME = Sed
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
RM = rm -f

MAIN = main.cpp

SRC = CustomSed.cpp\

$(NAME):
	$(CC) $(CFLAGS) $(SRC) $(MAIN) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

test: re
	$(re) ./$(NAME) test.txt "This is a" ""

wrong: re
	$(re) ./$(NAME) no.txt 2 3

.PHONY:	all clean fclean re test wrong
