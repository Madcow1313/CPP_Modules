NAME = Bureaucrat

CC = c++

CFLAGS = -Wall -Wextra -Werror

SOURCE = Bureaucrat.cpp main.cpp

HEADER = Bureaucrat.hpp

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