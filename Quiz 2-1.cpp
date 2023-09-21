#include <iostream>

using namespace std;

int suma(int* num1, int* num2) {
    if (num1 == nullptr || num2 == nullptr) {
        return 0;  
    }

    return *num1 + *num2;
}

int main() {
    int a;

    cout << "Ingrese el primer número: ";
    cin >> a;

    int num1 = a;
    int b;

    cout << "Ingrese el segundo número: ";
    cin >> b;
    
    int num2 = b;

    int* puntero1 = &num1;
    int* puntero2 = &num2;

    int result = suma(puntero1, puntero2);

    cout << "La suma de los números es: " << result << std::endl;

    return 0;
}
