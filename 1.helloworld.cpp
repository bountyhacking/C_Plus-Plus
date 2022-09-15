//Estructura Basica de C++

// this is my first program in C++
// This is a comment.


#include <iostream> //El hash # corresponde a una directiva la cual indica una libreria <iostream>
using namespace std; //"namespaces" son utilizados para agrupar clases, funciones, etc..

// El uso de punto y coma (;) son los "terminator/terminadores" utilizados para señalar el final de una instruccion.

int main () //Esta es la declaración de la funcion, la cual indica donde comenzara la ejecucion del programa. Es la primer funcion que sera ejecutada.
{	// Los brackets {} indican el cuerpo de la funcion y engloban todas las instrucciones dentro de una funcion desde donde comienzan ahsta donde terminan.
	
	cout << "hello world!"; // El uso de "cout <<" sirve para que se refleje el output en una consola
	return 0; //El valor 0 en el return indica que el programa termine aqui sin errores. Puede tener diferentes valores.
	
}
// Nota importante: Utilizar "system("PAUSE");" o "cin.ignore();" sirven para evitar que la terminal se cierre de forma automatica.
