NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

CPP = c++

FLAGS = -Wextra -Werror -Wall -std=c++98

all: $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CPP) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re
