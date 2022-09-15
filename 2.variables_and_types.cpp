//Variables y Types

//Def: Las variables son cosas que asignamos (al igual que en todos los lenguajes de programacion)
//	   Las variables son almacenadas en la memoria de la computadora. Al igual que en C debemos especificar
//	   que tipo de datos estamos manejando. Para ello utilizamos "type".

// Existen diferentes tipos de datos, algunos de ellos son:
// short & short int -> Short integrer (2 bytes)
// int -> Integrer (4 bytes)
// long & long int -> loong integrer (4 bytes)
// bool -> boolean (1 byte)
// float -> floating point number (4 bytes)
// double -> double precision floating point number (8 bytes)
// char -> character (1 byte)

#include<iostream>
using namespace std;

// declaracion de la variable global
int global_variable = 4;

intmain(){
	
	// declaracion de las variables locales
	int a = 0;
	int b = 2;
	int sum = a + b;
	
	cout << "El valor de la suma es: " << sum << endl;
	
	a = 3;
	
	sum = a + b;
	
	cout << "El valor de la suma es " << sum << endl;
	
	cin.ignore();
	
	return 0;
}
