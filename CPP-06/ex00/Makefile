NAME = convert

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp

HEADER = Convert.hpp

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