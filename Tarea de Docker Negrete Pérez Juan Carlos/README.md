# Automatización y Despliegue con Docker - Proyecto Embedded IoT

**Institución:** Escuela Superior de Cómputo (ESCOM) - IPN  
**Carrera:** Ingeniería en Sistemas Computacionales  
**Desarrollador:** Juan Carlos Negrete Pérez  

---

## 1. Fundamentos: ¿Qué es Docker y por qué lo usamos?

Docker es una plataforma de virtualización a nivel de sistema operativo que permite empaquetar software junto con todas sus dependencias (librerías, binarios y configuraciones) en unidades estandarizadas llamadas **contenedores**.

A diferencia de las máquinas virtuales clásicas, los contenedores no emulan un hardware completo ni requieren un sistema operativo invitado pesado; en su lugar, comparten el kernel del sistema host. Esto resulta en importantes ventajas para el desarrollo de software:
* **Portabilidad:** Se elimina de forma definitiva el problema de *"en mi máquina sí compila"*.
* **Ligereza y Velocidad:** Los contenedores inician en milisegundos y consumen una fracción de los recursos (RAM y CPU) en comparación con una máquina virtual.
* **Aislamiento:** Los procesos de un contenedor no interfieren con el host ni con otros contenedores, manteniendo el entorno de trabajo limpio.

---

## 2. Contenedor Inicial: Compilación en C y Renderizado

### Descripción de la Arquitectura
Este entorno encapsula la cadena de herramientas necesaria para compilar código en C y generar gráficos. El programa escrito en C (`main.c`) procesa un conjunto de datos matemáticos y los guarda en un archivo de texto plano (`datos.dat`). Posteriormente, un archivo `Makefile` automatiza la ejecución del utilitario `gnuplot`, el cual lee estos datos generados y renderiza la imagen final `grafica.jpg`.

### Desglose del Dockerfile
* `FROM ubuntu:22.04`: Utiliza una imagen base estable de Linux como punto de partida.
* `RUN apt-get update && apt-get install...`: Descarga e instala los compiladores (`gcc`, `build-essential`) y utilidades gráficas (`gnuplot`) dentro del contenedor, evitando tener que instalar todo esto en la máquina de Windows.
* `WORKDIR /usr/src/app`: Define el directorio de trabajo interno del contenedor.
* `COPY . .`: Copia el código fuente local al interior del contenedor.
* `CMD ["make", "all"]`: Es el comando de arranque. Al encender el contenedor, dispara automáticamente las instrucciones del Makefile.

### Instrucciones de Ejecución
Abre una terminal (como PowerShell) en el directorio `Contenedor_C` y ejecuta los siguientes comandos:

### Evidencias de Ejecución y Resultados
### 3. Evidencias de Ejecución y Resultados

**1. Construir la imagen de Docker (Contenedor C):**


docker build -t contenedor-c-jpg .
<img width="1602" height="945" alt="Prueba de generacion de imagen" src="https://github.com/user-attachments/assets/43756e47-3a10-47be-af7b-f8cde0aa895d" />

docker run --rm -v "${PWD}:/usr/src/app" contenedor-c-jpg
<img width="1615" height="942" alt="Grafica creada desde C" src="https://github.com/user-attachments/assets/2566a480-1805-457e-bf0f-c7b167afdf99" />

docker build -t contenedor-python-png .
<img width="1530" height="925" alt="Creacion de la imagen de los precios de BTC" src="https://github.com/user-attachments/assets/93a5da3c-05a3-4884-804e-938f1281691d" />

docker run --rm -v "${PWD}:/app" contenedor-python-png
<img width="640" height="480" alt="btc_usd_trend" src="https://github.com/user-attachments/assets/a1b7112d-5866-4098-946e-f65a45461d63" />
