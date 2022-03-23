NAME = Fixed

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp Fixed.cpp

INCLUDE= Fixed.hpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o: $(INCLUDE)
		$(CC) -I $(INCLUDE) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(INCLUDE) $(OBJS)
		$(CC) -I $(INCLUDE) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all