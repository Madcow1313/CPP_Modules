NAME = reference

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = main.cpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o:
		$(CC) $(INCLUDE) $(CFLAGS) -std=c++98 -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all