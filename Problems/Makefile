# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable directory and name
BUILD_DIR = build
TARGET = $(BUILD_DIR)/main.exe

# Source files
SRCS = main.cpp

# Object files directory and object files
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# Default build target
all: $(TARGET)

# Rule to create the build directory if it doesn't exist
$(BUILD_DIR):
	mkdir $(BUILD_DIR)

# Rule to link the object file(s) to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile the source file into object file(s)
$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rmdir /s /q $(BUILD_DIR)

# Run the executable
run: $(TARGET)
	./$(TARGET)
