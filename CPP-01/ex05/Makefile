NAME = Harl
CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp Harl.cpp

HEADER = Harl.hpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o: $(HEADER)
		$(CC)  $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all