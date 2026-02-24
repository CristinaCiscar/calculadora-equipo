// Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <iostream>
using namespace std;
// Declaraciones de funciones
void mostrarMenu();
double sumar(double a, double b);
double restar(double a, double b);
double multiplicar(double a, double b);
int main() {
	int opcion;
	double num1, num2, resultado;
	do {
		mostrarMenu();
		cout << "Elige una opcion: ";
		cin >> opcion;
		if (opcion >= 1 && opcion <= 3) { // Cambia de 2 a 3
			cout << "Introduce el primer numero: ";
			cin >> num1;
			cout << "Introduce el segundo numero: ";
			cin >> num2;
			switch (opcion) {
			case 1:
				resultado = sumar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;
			case 2:
				resultado = restar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;
			case 3:
				resultado = multiplicar(num1, num2);
				cout << "Resultado: " << resultado << endl;
				break;


			}
		}
		else if (opcion != 0) {
			cout << "Opcion no valida" << endl;
		}
		cout << endl;
	} while (opcion != 0);
	cout << "Hasta luego!" << endl;
	return 0;
}
	void mostrarMenu() {
		cout << "=== CALCULADORA ===" << endl;
		cout << "1. Sumar" << endl;
		cout << "2. Restar" << endl;
		cout << "3. Multiplicar" << endl; // NUEVA LÍNEA
		cout << "0. Salir" << endl;
	}

double sumar(double a, double b) {
	return a + b;
}
double restar(double a, double b) {
	return a - b;
}
double multiplicar(double a, double b) {
	return a * b;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
