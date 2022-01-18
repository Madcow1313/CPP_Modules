NAME = phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror

HEADER = phonebook.hpp

SOURCE = phonebook.cpp set_get_member.cpp phone_book_methods.cpp

OBJS = $(SOURCE:.cpp=.o)

.cpp.o:
		$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(HEADER) $(OBJS)
		$(CC) $(CFLAGS) -std=c++98 $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re:	fclean all