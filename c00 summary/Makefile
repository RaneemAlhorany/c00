# Makefile for C++ project

# Compiler
CC = c++

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -std=c++98

# Project name
NAME = nameProject

# Source files
SRCS = file1.cpp \
		file2.cpp \
		.... 

# Object files
OBJS = $(SRCS:.cpp=.o)

# Remove command
RM = rm -f

# Default target
all: $(NAME)

# Build the executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Rule to compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean object files
clean:
	$(RM) $(OBJS)

# Clean object files and executable
fclean: clean
	$(RM) $(NAME)

# Rebuild the project
re: fclean all

# Declare phony targets
.PHONY: all clean fclean re