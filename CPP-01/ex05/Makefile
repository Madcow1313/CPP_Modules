NAME = karen

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp Karen.cpp

HEADER = Karen.hpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o:
		$(CC) $(HEADER $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all