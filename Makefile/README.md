# Automatización de Compilación con Makefiles

**Escuela Superior de Cómputo (ESCOM) - IPN** **Carrera:** Ingeniería en Sistemas Computacionales  
**Autor:** Chang  

---

## 1. Análisis del Repositorio de Ejemplo

El Makefile proporcionado en clase demuestra un flujo de trabajo básico pero robusto para automatizar el proceso de compilación de un programa en C. Su objetivo principal es evitar la ejecución manual y repetitiva del compilador `gcc`, minimizando errores tipográficos y estandarizando la forma en que cualquier desarrollador interactúa con el código.

**Desglose y Funcionamiento del Código:**

* **Definición de Variables (Macros):**
  * `CC = gcc`: Define el compilador a utilizar.
  * `CFLAGS = -Wall -Wextra -O2`: Establece las banderas de compilación para activar advertencias estrictas y optimización.
  * `TARGET = hola`: Define el nombre del ejecutable final.
  * `SRCS = main.c` y `OBJS = $(SRCS:.c=.o)`: Convierte el nombre del archivo fuente a su respectivo archivo objeto mediante sustitución de sufijos.
* **Objetivos Falsos (`.PHONY`):** Indica que `all`, `run`, `clean`, `help`, y `rebuild` son comandos y no archivos físicos.
* **Reglas de Automatización:**
  * `all: $(TARGET)`: Regla por defecto al ejecutar `make`.
  * `%.o: %.c`: Regla patrón que enseña cómo compilar cualquier `.c` a `.o`.
  * `$(TARGET): $(OBJS)`: Regla de enlazado que toma los objetos y crea el ejecutable.
  * `run:`, `clean:`, `rebuild:`: Reglas de utilidad para ejecutar el programa, limpiar el entorno borrando binarios generados, o reconstruir desde cero.

**Reporte de Resultados de Ejecución:**
Al ejecutar los comandos en la terminal, se obtuvo el siguiente comportamiento automatizado:
1. `make help`: Desplegó el menú de objetivos disponibles.
2. `make`: Ejecutó los comandos `gcc` necesarios para generar `main.o` y el ejecutable `hola`.
3. `make run`: Compiló (si había cambios) y ejecutó `./hola`, imprimiendo los mensajes de prueba.
4. `make clean`: Ejecutó `rm -f main.o hola` limpiando el directorio.

---

## 2. Proyecto Propio: Calculadora Modular en C

### Descripción del Proyecto
Este proyecto es una demostración de la estandarización de procesos de compilación utilizando Makefiles. Consiste en una calculadora escrita en C dividida en múltiples archivos (`main.c`, `operaciones.c`, y su cabecera `operaciones.h`). El objetivo es mostrar cómo un Makefile gestiona las dependencias y compila únicamente los archivos que han sido modificados, optimizando el tiempo de construcción.

### Explicación del Makefile Propio
El archivo `Makefile` de este repositorio está estructurado de la siguiente manera:
* **Variables (`CC`, `CFLAGS`, `TARGET`, `OBJS`):** Centralizan la configuración del compilador y los archivos requeridos.
* **Reglas de compilación (`.o`):** Indican las dependencias específicas de cada archivo fuente y su cabecera.
* **Regla de enlazado (`$(TARGET)`):** Une los archivos objeto generados para crear el ejecutable final `calculadora`.
* **Regla `clean`:** Elimina los archivos `.o` y el ejecutable para mantener el entorno limpio.

### Instrucciones de Ejecución (Entorno Windows)

Para compilar y ejecutar este proyecto en la terminal de PowerShell utilizando el compilador integrado de Code::Blocks (sin modificar las variables de entorno del sistema), sigue estos pasos:

1. **Preparar el entorno de la terminal:**
   Ejecuta el siguiente comando para enlazar temporalmente la ruta del compilador a tu sesión actual:
   ```powershell
   $env:Path = "C:\Program Files\CodeBlocks\MinGW\bin;" + $env:Path

### Instrucciones de Ejecución
Para compilar y ejecutar este proyecto en la terminal (Linux/macOS o un entorno Bash):

2. Para compilar el código automáticamente, ejecuta:
   ```bash
   make