#include <iostream>

void invertirArreglo(int* arreglo, int* resultado, int n){
    for (int i = 0; i < n; ++i) {
        resultado[i] = arreglo[n - i -1];
    }
}

int main() {
    int n;

    std::cout << "Ingrese el tamaño del arreglo (n): ";
    std::cin >> n;

    // Crear arreglo y reservar memoria
    int* arreglo = new int[n];
    int* resultado = new int[n];

    // Ingresar valores en el arreglo
    std::cout << "Ingrese los valores del arreglo:" << std::endl;
    for (int i = 0; i < n; ++i) {
            std::cout << "Ingrese el valor para la posición " << i << ": ";
            std::cin >> arreglo[i];
    }

    // Invertir el arreglo
    invertirArreglo(arreglo, resultado, n);

    // Mostrar el arreglo resultado
    std::cout << "El arreglo resultado es:"  << std::endl;
    for (int i = 0; i < n; ++i) {
            std::cout << resultado[i] << " ";
    }
        std::cout << std::endl;

    // Liberar memoria
    delete[] arreglo;
    delete[] resultado;

    return 0;
}