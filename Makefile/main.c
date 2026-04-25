#include <stdio.h>
#include "operaciones.h"

int main() {
    int x = 10;
    int y = 5;
    
    printf("--- Calculadora Modular ---\n");
    printf("Suma de %d + %d = %d\n", x, y, sumar(x, y));
    printf("Resta de %d - %d = %d\n", x, y, restar(x, y));
    
    return 0;
}