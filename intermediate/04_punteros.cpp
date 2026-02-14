#include <iostream>
using namespace std;

int main() {
    int numero = 20;
    int* ptr = &numero;

    cout << "Valor: " << numero << endl;
    cout << "Direccion: " << &numero << endl;
    cout << "Puntero apunta a: " << *ptr << endl;

    return 0;
}

