NAME = megaphone

CXX=c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

OBJ = megaphone.o

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
