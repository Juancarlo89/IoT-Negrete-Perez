CC = gcc
CFLAGS = -Wall
TARGET = generar_datos

all: $(TARGET)
	./$(TARGET)
	gnuplot plot.gnu

$(TARGET): main.c
	$(CC) $(CFLAGS) -o $(TARGET) main.c

clean:
	rm -f $(TARGET) datos.dat grafica.jpg