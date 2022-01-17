NAME = megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = megaphone.cpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o: $(HEADER)
		$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all