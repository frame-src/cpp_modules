NAME = main

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SDIR = src
ODIR = obj

SRC = \src\megaphone.cpp \
OBJ = $(SRC:.cpp=.o)

.ccp.o:
	$(CC) $(FLAGS) $< - o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ) 

fclean: clean
	rm -f $(NAME)

.PHONY: all clean fclean re