#include <iostream>

using namespace std;

int main() {
	// Do statement - Sentencia do
	// Sintaxis:
	int numero = 1;
	do {
		cout << "Numero: " << numero << endl;
		numero++;
	} while (numero <= 10);

	// Do statement - Sentencia do (con break) + if statement - Sentencia if
	// Sintaxis:
	int numero2 = 1;
	do {
		cout << "Numero: " << numero2 << endl;
		numero2++;
		if (numero2 == 5) // Si el numero es igual a 5
		{
			break; // Rompe el ciclo
		}
	} while (numero2 <= 10);

	return 0;
};