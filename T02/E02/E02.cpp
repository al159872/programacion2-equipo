#include <iostream>
using namespace std;
#define PI 3.1415926535 // Definimos una constante con el valor PI.

/*
	2.- Utilizando Stream2.cpp y Numconv.cpp como guías, cree un programa que
	le pida el radio de un círculo y le muestre el área del mismo. Puede usar el
	operador * para elevar el radio al cuadrado. No intente imprimir el valor en
	octal o en hexadecimal (sólo funciona con tipos enteros).
*/

int main()
{
	float radio; // Definimos el radio como flotante, para poder admitir valores con punto decimal.
	float area; // Variable que almacenará el resultado.
	cout << "Ingrese la medida del radio de un circulo: ";
	cin >> radio; // Captura el dato.
	area = radio * radio * PI; // Formula de el area de un circulo (PI por radio al cuadrado).
	cout << "El valor del area del circulo es: " << area; // Imprime el valor.
}
