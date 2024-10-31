#include <iostream>

using namespace std;

int main() {
	// For statement - Sentencia for
	// Sintaxis:
	for (int i = 1; i <= 10; i++) // Inicializa la variable "i" en 1, mientras "i" sea menor o igual a 10, incrementa "i" en 1
	{
		cout << "Numero: " << i << endl;
	}

	// For statement - Sentencia for (con break) + if statement - Sentencia if
	// Sintaxis:
	for (int j = 1; j <= 10; j++) // Inicializa la variable "j" en 1, mientras "j" sea menor o igual a 10, incrementa "j" en 1
	{
		cout << "Numero: " << j << endl;
		if (j == 5) // Si "j" es igual a 5
		{
			break; // Rompe el ciclo
		}
	}

	return 0;
};