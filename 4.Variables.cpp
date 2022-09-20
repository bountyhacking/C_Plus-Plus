// Declaracion de variables

/*
Def:Exisisten diferentes tipos de variables, a diferencia de python, tenemos que declararlas
	antes previamente, de lo contrario no funcionara nuestro programa. Estas son:
	
	int (enteros) -> -inf...0...inf+
	double (decimales) -> -10.00...0...10.00
	char (caracteres) -> 'a' o 'A'
	string (cadenas de texto) -> 'hello world'
	bool (buleanos) -> V...o...F ; 1...o...0
*/

#include <iostream>
using namespace std;

int main(){
	
	cout << "ESTE ES EL PRIMER BLOQUE:\n";
	cout << "Hola, soy bountyhacker. Tengo\n";
	// En esta linea estamos delcarando la variable.
	int edad = 25;
	// En esta linea estamos imprimiendo nuestra variable, previamente declarada.
	cout << edad;
	cout << "...Años de edad";
	
	cout << "\n";
	cout << "\n";
	
	cout << "ESTE ES EL SEGUNDO BLOQUE:\n";
	cout << "Es broma, en realidad tengo \n";
	// En esta linea volvemos a darle un nuevo valor a nuestra variable edad.
	// IMPORTANTE: No tenemos que volver a declarar el valor 'int' por que ya fue declarada anteriormente.
	// Si declaramos mas de una vez la variable, nos tira errores.
	edad = 30;
	cout << edad;
	
	cout << "\n";
	cout << "\n";
	
	cout << "ESTE ES EL TERCER BLOQUE:\n";
	cout << "Entonces, yo tengo actualmente " << edad << " de edad";

	cout << "\n";
	cout << "\n";

	cout << "ESTE ES EL CUARTO BLOQUE:\n";	
	bool edad25 = false;
	bool edad30 = true;
	cout << "Si tengo 25 de edad es falso: " << edad25 << " Pero si tengo 30 es verdadero: " << edad30;
	
	cout << "\n";
	cout << "\n";
	
	cout << "ESTE ES EL QUINTO BLOQUE:\n";
	char inicial = 'B';
	string nombre = "Bountyhacker"; 
	
	cout << "Hola, mi nombre es: " << nombre << " Mi inicial comienza con la letra: " << inicial;
	
	cout << "\n";
	cout << "\n";
	
	cout << "ESTE ES EL SEXTO BLOQUE:\n";
	double estatura = 1.70;
	cout << "Actualmente estoy midiento: " << estatura << " metros de alto";
	
	cout << "\n";
	cout << "\n";
	
	cout << "ESTE ES EL SEPTIMO BLOQUE:\n";
	int num1 = 25;
	int num2 = 30;
	int suma = num1 + num2;
	int resta = num2 - num1;
	int mult = num1 * num2;
	double div = num1 / num2;
	cout << "Si sumamos mi edad falsa: 25 con mi edad verdadera: 30, el resultado nos da... " << suma;
	cout << "\n";
	cout << "Pero, si restamos ambos numeros el resultado sera... " << resta;
	cout << "\n";
	cout << "Si multiplicaramos ambos numeros, el resultado sera... " << mult;
	cout << "\n";
	cout << "Pero, al dividir los numeros el resultado sera... " << div;
	
	return 0;
}

