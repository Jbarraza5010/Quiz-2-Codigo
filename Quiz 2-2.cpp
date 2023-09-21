#include <iostream>

using namespace std;

void copiar(int* a, int* b, int tamaño) {
    for (int i = 0; i < tamaño; i++) {
        *(b + i) = *(a + i);
    }
}

int main() {
    int tamaño;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> tamaño;

    int* arregloInput = new int[tamaño];
    int* arregloOutput = new int[tamaño];

    cout << "Ingrese los elementos del arreglo:\n";
    for (int i = 0; i < tamaño; i++) {
        cout << "Elemento: ";
        cin >> arregloInput[i];
    }

    copiar(arregloInput, arregloOutput, tamaño);

    cout << "Arreglo copiado: " << "[";
    for (int i = 0; i < tamaño; i++) {
        if (i == tamaño - 1){
            cout << arregloOutput[i] << "]";
        }
        else {
            cout << arregloOutput[i] << ", ";
        }
    }
    cout << "\n";

    delete[] arregloInput;
    delete[] arregloOutput;

    return 0;
}
