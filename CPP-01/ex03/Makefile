NAME = violence

CC = c++

CFLAGS = -Wall -Wextra -Werror

HEADER = Weapon.hpp HumanA.hpp HumanB.hpp

SOURCE = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

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