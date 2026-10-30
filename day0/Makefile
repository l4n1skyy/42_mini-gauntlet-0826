# The binary this exercise builds
NAME := a.out

# Compiler and the gauntlet's mandatory flags
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -fsanitize=address

# Automatically pick up every .cpp file in this directory
SRCS := $(wildcard *.cpp)
OBJ_DIR := obj_files
OBJS := $(addprefix $(OBJ_DIR)/,$(SRCS:.cpp=.o))

# `make` / `make all`: build the binary
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compile each .cpp into a .o inside obj_files/
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# `make clean`: remove the entire obj_files folder
clean:
	rm -rf $(OBJ_DIR)

# `make fclean`: remove objects AND the binary
fclean: clean
	rm -f $(NAME)

# `make re`: rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re