#include <stdio.h>

int main() {
    FILE *archivo = fopen("datos.dat", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }
    
    // Genera datos simples para la gráfica
    for(int i = 0; i <= 10; i++) {
        fprintf(archivo, "%d %d\n", i, i * i);
    }
    
    fclose(archivo);
    printf("Datos generados correctamente en datos.dat\n");
    return 0;
}