# Variables del compilador y banderas
CC = gcc
CFLAGS = -Wall -g
TARGET = calculadora
OBJS = main.o operaciones.o

# Regla principal (la que se ejecuta al escribir solo 'make')
all: $(TARGET)

# Regla para enlazar los objetos y crear el ejecutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Regla para compilar main.c
main.o: main.c operaciones.h
	$(CC) $(CFLAGS) -c main.c

# Regla para compilar operaciones.c
operaciones.o: operaciones.c operaciones.h
	$(CC) $(CFLAGS) -c operaciones.c

# Regla para limpiar archivos generados
clean:
	rm -f *.o $(TARGET)
