# Automatización de Compilación con Makefiles

**Escuela Superior de Cómputo (ESCOM) - IPN** **Carrera:** Ingeniería en Sistemas Computacionales  
**Autor:** Juan Carlos Negrete Pérez

## 1. Análisis del Repositorio de Ejemplo

El Makefile proporcionado en clase demuestra un flujo de trabajo básico pero robusto para automatizar el proceso de compilación de un programa. Su objetivo principal es evitar la ejecución manual y repetitiva del compilador, minimizando errores tipográficos y estandarizando la forma en que cualquier desarrollador interactúa con el código.

**Desglose y Funcionamiento del Código:**

* **Definición de Variables (Macros):**
  * `CC = gcc`: Define el compilador a utilizar.
  * `CFLAGS = -Wall -Wextra -O2`: Establece las banderas de compilación para activar advertencias estrictas y optimización de rendimiento.
  * `TARGET = hola`: Define el nombre del ejecutable final.
  * `SRCS = main.c` y `OBJS = $(SRCS:.c=.o)`: Convierte el nombre del archivo fuente a su respectivo archivo objeto mediante sustitución de sufijos.
* **Objetivos Falsos (`.PHONY`):** Indica que `all`, `run`, `clean`, `help`, y `rebuild` son comandos de utilidad y no archivos físicos en el sistema.
* **Reglas de Automatización:**
  * `all: $(TARGET)`: Regla por defecto al ejecutar `make`.
  * `%.o: %.c`: Regla patrón que instruye cómo compilar cualquier archivo `.c` a `.o`.
  * `$(TARGET): $(OBJS)`: Regla de enlazado que toma los objetos para crear el ejecutable.
  * `run:`, `clean:`, `rebuild:`: Reglas para ejecutar el programa, limpiar el entorno borrando binarios generados, o reconstruir el proyecto desde cero.

**Reporte de Resultados de Ejecución:**
Al ejecutar los comandos en la terminal, se obtuvo el siguiente comportamiento automatizado:
1. `make help`: Desplegó el menú de objetivos disponibles.
2. `make`: Ejecutó los comandos necesarios para generar `main.o` y el ejecutable `hola`.
3. `make run`: Compiló (si detectó cambios recientes) y ejecutó el programa, imprimiendo los mensajes de prueba.
4. `make clean`: Limpió el directorio borrando los archivos generados.

---

## 2. Proyecto Propio: Calculadora Modular en C++

### Descripción del Proyecto
Este proyecto es una demostración de la estandarización de procesos de compilación utilizando Makefiles en un entorno Windows. Consiste en una calculadora escrita en C++ dividida en múltiples archivos (`main.cpp`, `operaciones.cpp`, y su cabecera `operaciones.h`). El objetivo es mostrar cómo un Makefile gestiona las dependencias y compila únicamente los archivos que han sido modificados, optimizando el tiempo de construcción.

### Explicación del Makefile Propio
El archivo `Makefile` de este repositorio está estructurado de la siguiente manera:
* **Variables (`CXX`, `CXXFLAGS`, `TARGET`, `OBJS`):** Centralizan la configuración del compilador (`g++` para C++) y los archivos requeridos.
* **Reglas de compilación (`.o`):** Indican las dependencias específicas de cada archivo fuente (`.cpp`) y su respectiva cabecera.
* **Regla de enlazado (`$(TARGET)`):** Une los archivos objeto generados para crear el ejecutable final `calculadora.exe`.
* **Regla `clean`:** Elimina los archivos `.o` y el ejecutable usando el comando `del` nativo de Windows para mantener el entorno de trabajo limpio.

### Instrucciones de Ejecución
Para compilar y ejecutar este proyecto en la terminal de Windows (PowerShell o CMD):

### Instrucciones de Ejecución (Entorno Windows)

Para compilar y ejecutar este proyecto en la terminal de PowerShell utilizando el compilador integrado de Code::Blocks (sin modificar las variables de entorno del sistema), sigue estos pasos:

1. **Preparar el entorno de la terminal:**
   Ejecuta el siguiente comando para enlazar temporalmente la ruta del compilador a tu sesión actual:
   ```powershell
   $env:Path = "C:\Program Files\CodeBlocks\MinGW\bin;" + $env:Path

2. Para compilar el código automáticamente, ejecuta:
   ```powershell
   make
