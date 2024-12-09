# Компилятор и флаги
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I/usr/include/UnitTest++

# Каталоги и файлы
SRCDIR = .
SRC = $(wildcard $(SRCDIR)/*.cpp)
OBJ = $(SRC:.cpp=.o)
TARGET = unit

# Флаги и библиотеки
LDFLAGS = -L/usr/lib -lUnitTest++ -lcryptopp

# Правила
all: $(TARGET) clean

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

.PHONY: all clean
