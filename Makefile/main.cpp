#include <iostream>
#include "operaciones.h"

using namespace std;

int main() {
    int x = 10;
    int y = 5;

    cout << "--- Calculadora Modular en C++ ---" << endl;
    cout << "Suma de " << x << " + " << y << " = " << sumar(x, y) << endl;
    cout << "Resta de " << x << " - " << y << " = " << restar(x, y) << endl;

    return 0;
}
