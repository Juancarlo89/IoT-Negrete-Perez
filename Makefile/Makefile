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

### Instrucciones de Ejecución (Entorno Windows)

### Para compilar y ejecutar este proyecto en la terminal de PowerShell utilizando el compilador integrado de Code::Blocks (sin modificar las variables de entorno del sistema), sigue estos pasos:

1. **Preparar el entorno de la terminal:**
   Ejecuta el siguiente comando para enlazar temporalmente la ruta del compilador a tu sesión actual:
   ```powershell
   $env:Path = "C:\Program Files\CodeBlocks\MinGW\bin;" + $env:Path