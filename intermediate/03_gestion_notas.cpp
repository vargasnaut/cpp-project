//Ingresar las notas de n estudiantes (el usuario indica cuántos estudiantes hay).

//Calcular el promedio de todas las notas.

//Mostrar las notas que están por encima del promedio.

//Se pide usar funciones para:

//Leer las notas.

//Calcular el promedio.

//Mostrar las notas por encima del promedio. 

#include <iostream>
using namespace std;

// Función para leer las notas
void leerNotas(float notas[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
    }
}

// Función para calcular el promedio
float calcularPromedio(float notas[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += notas[i];
    }
    return suma / n;
}

// Función para mostrar notas por encima del promedio
void mostrarNotasPorEncima(float notas[], int n, float promedio) {
    cout << "\nNotas por encima del promedio (" << promedio << "):\n";
    for (int i = 0; i < n; i++) {
        if (notas[i] > promedio) {
            cout << "Estudiante " << i + 1 << ": " << notas[i] << endl;
        }
    }
}

int main() {
    int n;

    cout << "Ingrese el número de estudiantes: ";
    cin >> n;

    float notas[n]; // Array de notas

    leerNotas(notas, n); // Llamada a la función para leer notas

    float promedio = calcularPromedio(notas, n); // Calculamos promedio

    cout << "\nEl promedio de las notas es: " << promedio << endl;

    mostrarNotasPorEncima(notas, n, promedio); // Mostramos notas mayores al promedio

    return 0;
}
