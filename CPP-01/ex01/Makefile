NAME = brainz

CC = c++

CFLAGS = -Wall -Wextra -Werror

HEADER = Zombie.hpp

SOURCE = Zombie.cpp main.cpp zombieHorde.cpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o: $(HEADER)
		$(CC) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all