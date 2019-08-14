#include <string>
#include <fstream>
#include <iostream>
using namespace std;

/*
	3.- Cree un programa que abra un fichero y cuente las palabras (separadas por
	espacios en blanco) que contiene.
*/


int main()
{
	string line;
	int count = 0;
	ifstream file("example.txt"); // Abre archivo
	while (getline(file, line)) // Entra en el bucle mientras aun haya lineas en el archivo y lee linea por linea
	{
		cout << line << '\n'; // Imprime las lineas del archivo
		for (int i = 0; i < line.size(); i++) // Revisa cada caracter de la linea
		{
			if (line[i] == ' ') // Compara si el caracter es un espacio
			{
				count++; // Incrementa el contador para la palabra.
			}
		}
	}
	if (count == 0)
	{
		printf("Numero de palabras: %d", count); // No hay ningun especio vacio.
	}
	else
	{
		printf("Numero de palabras: %d", count + 1); // Hubo por lo menos un espacio vacio.
	}
}
	