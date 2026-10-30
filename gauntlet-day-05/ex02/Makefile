# The binary this exercise builds
NAME := visit

# Compiler and the gauntlet's mandatory flags
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++17 -Iinclude

# main.cpp lives in the project root, everything else in src/
SRCS := main.cpp $(wildcard src/*.cpp)
BUILD_DIR := build
OBJS := $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRCS))

# `make` / `make all`: build the binary
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compile each .cpp into a matching .o under build/, preserving src/ subfolder
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# `make clean`: remove the entire build folder
clean:
	rm -rf $(BUILD_DIR)

# `make fclean`: remove objects AND the binary
fclean: clean
	rm -f $(NAME)

# `make re`: rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re
