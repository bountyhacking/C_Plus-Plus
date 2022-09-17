// Input & output.

// Def: Es aquello que nos permite ingresar datos y valores en una variable.
//		En los ejercicios anteriores vimos el siguiente codigo:

#include<iostream>
using namespace std;

int main()
{
	
	int uservaule;
	
	// esta linea corresponde a un output.
	// Cout representa el standard output. la opcion por defecto es imprimir por consola.
	// los operadores "<<" se utiliza para imprimir una combinacion de strings y variables.
	// "endl" inserta una new line character. asegura que el proximo output se imprima 
	// en una nueva linea.
	cout << "Este programa agrega 10 a tu input. " << endl;
	cout << "Ingresa tu input ";
	
	// "cin >>" en este caso se usa para capturar elinput del usuario.
	// Lo que sucede en la siguiente linea es para almacenar el imput en una variable
	cin >> uservalue;
	
	cout << "El valor agregado es " << uservalue;
	cout << " y el nuevo valor agregado es " << uservalue + 10 << endl;
	
	cin.ignore();
	cout << "Presiona enter para salir...";
	con.ignore();
	
	return 0;
}
