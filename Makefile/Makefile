# Variables del compilador y banderas para C++
CXX = g++
CXXFLAGS = -Wall -g
TARGET = calculadora.exe
OBJS = main.o operaciones.o

# Regla principal
all: $(TARGET)

# Regla para enlazar los objetos y crear el ejecutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Reglas para compilar archivos .cpp
main.o: main.cpp operaciones.h
	$(CXX) $(CXXFLAGS) -c main.cpp

operaciones.o: operaciones.cpp operaciones.h
	$(CXX) $(CXXFLAGS) -c operaciones.cpp

# Regla para limpiar archivos en Windows
clean:
	del /Q /F *.o $(TARGET)
