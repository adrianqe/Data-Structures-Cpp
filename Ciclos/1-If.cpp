#include <iostream>

using namespace std;

int main() {
	// If statement (if-else) - Sentencia if (si-sino)
	// Sintaxis:
	int numero = 10;

	if (numero > 5) { // Si el numero es mayor a 5
		cout << "El numero es mayor a 5" << endl;
	}
	else { // Sino
		cout << "El numero es menor o igual a 5" << endl;
	}

	// If statement (if-else if-else) - Sentencia if (si-sino si-sino)
	// Sintaxis:
	int edad = 18;
	if (edad > 18 && edad <= 30) // Si la edad es mayor a 18 y menor o igual a 30
	{
		cout << "Joven" << endl;
	}
	else if (edad > 30 && edad <= 60) // Sino si la edad es mayor a 30 y menor o igual a 60
	{
		cout << "Adulto" << endl;
	}
	else // Sino
	{
		cout << "Adulto mayor" << endl;
	}

	// if statement (if-else if-else) - Sentencia if (si-sino si-sino)
	// Sintaxis:
	string nombre = "Juan";
	if (nombre == "Juan") // Si el nombre es Juan
	{
		cout << "Hola Juan" << endl;
	}
	else if (nombre == "Pedro") // Sino si el nombre es Pedro
	{
		cout << "Hola Pedro" << endl;
	}
	else // Sino
	{
		cout << "Hola desconocido" << endl;
	}

	return 0;
};