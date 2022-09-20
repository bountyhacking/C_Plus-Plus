// Operadores

/*
Def:En C++ existen diferentes tipos de operadores, tanto matematicos, de asignacion, relacionales, bit a bit
	logicos y mas. 
*/

#include <iostream>
using namespace std;

int main(){
	
	// 1.Operadores Aritmeticos
	int a, b, c, d; // declaracion de las variables
	int x, y;
	// asignacion de valores hacia las variables
	a = 5;
	b = 10;
	c = 20;
	d = 2;
	cout << "1.Operadores Aritmenticos\n";
	cout << "\n";
	cout << "Sea A = 5 ; B = 10 ; C = 20\n";
	
	// Operar una suma entre los numeros
	cout << "A + B + C es igual a... " << (a+b+c) << endl;
	// Operar una suma en 1 unidad a una misma variable
	cout << "Al operar ++A es igual a... " << (++a) << endl;
	// Operar una resta entre los numeros
	cout << "A - B - C es igual a... " << (a-b-c) << endl;
	// Operar una resta en -1 unidad a una misma variable
	cout << "Al operar --A es igual a... " << (--a) << endl;
	// Operar una multiplicacion entre los numeros
	cout << "A * B * C es igual a... " << (a*b*c) << endl;
	// Operar una division entre C y A
	cout << "A / C  es igual a... " << (a/c) << endl;
	// Operar una division entre A y A
	cout << "A / A  es igual a... " << (a/a) << endl;
	// Obtener el modulo entre A y C
	cout << "A % C  es igual a... " << (a%c) << endl;
	
	cout << "\n";
	cout << "\n";
	
	// 2.Operadores de Asignacion
	cout << "2.Operadores de Asignacion\n";
	cout << "\n";
	cout << "Sea D = 2\n";
	
	// Nota importante: Como D es una variable local y no global, su valor se modifica dentro de toda
	// la funcion.
	
	// Operar un incremento +=
	d += 3;
	cout << "Al operar el incremento de D = 2 en 3 unidades es... " << d << endl;
	// Operar el derecimiento -=
	d -= 1;
	cout << "Al operar el derecimiento de D = 5 en -1 unidad es... " << d << endl;
	// Operar la multiplicacion *=
	d *= 2;
	cout << "Al operar la multiplicacion de D = 4 por 2 es... " << d << endl;
	// Operar la division /=
	d /= 1;
	cout << "Al operar la division de D = 8 entre 1 es... " << d << endl;
	// Operar el modulo %/
	d %= 2121;
	cout << "Al operar el modulo de D = 8 a 100 es... " << d << endl;
	
	cout << "\n";
	
	// 3.Operadores de Comparasion
	cout << "3.Operadores de Comparasion\n";
	cout << "\n";
	cout << "Sea X e Y\n";
	cout << "Sea True = 1 y False = 0\n";
	
	// Operar una igualdad
	cout << (x == x) << endl; // El resultado es 1 = True
	// Operar una igualdad incorrecta
	cout << (x == y) << endl; // El resultado es 0 = False
	// Operar una desigualdad
	cout << (x != y) << endl; // El resultado es 1 = True
	// Operar un incremento verdadero
	cout << (d > a) << endl; // El resultado es 1 = True
	// Operar un derecimiento verdadero
	cout << (a < d) << endl; // El resultado es 1 = True
	// Operar un incremento falso
	cout << (d < a) << endl; // El resultado es 0 = False
	// Operar un derecimiento falso
	cout << (a > d) << endl; // El resultado es 0 = False
	// Operar un menor o igual verdadero
	cout << ( a <= d) << endl; // El resultado es 1 = True
	// Operar un mayor o igual verdadero
	cout << (d >= a) << endl; // El resultado es 1 = True
	
	cout << "\n";
	
	// 4. Operadores Logicos
	cout << "3.Operadores Logicos\n";
	cout << "\n";
	cout << "Sea (&& = AND) ; (|| = OR) ; (! = NOT)\n";
	
	
	return 0;
}
