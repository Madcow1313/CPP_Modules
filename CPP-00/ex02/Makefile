NAME = Account

CC = c++

CFLAGS = -Wall -Wextra -Werror

HEADER = Account.hpp

SOURCE = Account.cpp tests.cpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o:
		$(CC) $(INCLUDE) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all