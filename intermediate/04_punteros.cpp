#include <iostream>
using namespace std;

int main() {
    int numero = 10;
    int* ptr = &numero;

    cout << "Valor: " << numero << endl;
    cout << "Direccion: " << &numero << endl;
    cout << "Puntero apunta a: " << *ptr << endl;

    return 0;
}

