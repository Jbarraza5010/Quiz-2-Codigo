#include <iostream>

void sumarMatrices(int** matriz1, int** matriz2, int** resultado, int m, int n) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

int main() {
    int m, n;

    std::cout << "Ingrese el número de filas (m): ";
    std::cin >> m;

    std::cout << "Ingrese el número de columnas (n): ";
    std::cin >> n;

    // Crear matrices y reservar memoria
    int** matriz1 = new int*[m];
    int** matriz2 = new int*[m];
    int** resultado = new int*[m];

    for (int i = 0; i < m; ++i) {
        matriz1[i] = new int[n];
        matriz2[i] = new int[n];
        resultado[i] = new int[n];
    }

    // Ingresar valores en la primera matriz
    std::cout << "Ingrese los valores de la primera matriz:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "Ingrese el valor para la fila " << i + 1 << " y columna " << j + 1 << ": ";
            std::cin >> matriz1[i][j];
        }
    }

    // Ingresar valores en la segunda matriz
    std::cout << "Ingrese los valores de la segunda matriz:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << "Ingrese el valor para la fila " << i + 1 << " y columna " << j + 1 << ": ";
            std::cin >> matriz2[i][j];
        }
    }

    // Realizar la suma de las matrices
    sumarMatrices(matriz1, matriz2, resultado, m, n);

    // Mostrar la matriz resultado
    std::cout << "La matriz resultado es:" << std::endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << resultado[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Liberar memoria
    for (int i = 0; i < m; ++i) {
        delete[] matriz1[i];
        delete[] matriz2[i];
        delete[] resultado[i];
    }

    delete[] matriz1;
    delete[] matriz2;
    delete[] resultado;

    return 0;
}
