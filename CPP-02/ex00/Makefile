NAME = Fixed

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp Fixed.cpp

HEADER= Fixed.hpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o: $(INCLUDE)
		$(CC) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all