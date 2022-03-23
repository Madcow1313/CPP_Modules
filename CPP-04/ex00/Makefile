NAME = Animal

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongAnimal.cpp WrongCat.cpp

HEADER = Animal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o:
		$(CC) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all