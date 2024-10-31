#include <iostream>

using namespace std;

int main() {
	// Switch statement - Sentencia switch
	// Sintaxis:
	int numero = 2;
	switch (numero) // Evalua la variable "numero"
	{
	case 1: // Si el "numero" es 1
		cout << "El numero es 1" << endl;
		break;
	case 2: // Si el "numero" es 2
		cout << "El numero es 2" << endl;
		break;
	case 3: // Si el "numero" es 3
		cout << "El numero es 3" << endl;
		break;
	default: // Si no se cumple ningun caso
		cout << "El numero no es 1, 2 o 3" << endl;
		break;
	}




	// Switch statement - Sentencia switch y do statement - Sentencia do
	// Sintaxis:
	int opcion = 0;
	do {
		cout << "Menu" << endl;
		cout << "1. Opcion 1" << endl;
		cout << "2. Opcion 2" << endl;
		cout << "3. Opcion 3" << endl;
		cout << "4. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion; // Lee la opcion ingresada por el usuario

		switch (opcion) // Evalua la variable "opcion"
		{
		case 1: // Si la "opcion" es 1
			cout << "Opcion 1" << endl;
			break;
		case 2: // Si la "opcion" es 2
			cout << "Opcion 2" << endl;
			break;
		case 3: // Si la "opcion" es 3
			cout << "Opcion 3" << endl;
			break;
		case 4: // Si la "opcion" es 4
			cout << "Salir" << endl;
			break;
		default: // Si no se cumple ningun caso
			cout << "Opcion invalida" << endl;
			break;
		}

	} while (opcion != 4); // Mientras la "opcion" sea diferente de 4

	return 0;
};