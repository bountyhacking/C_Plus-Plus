// ejercicio menu

#include <iostream>
using namespace std;

int main(){
	
	int user_value;
	cout << "seleccione una opcion\n";
	cout << "1.suma\n 2.resta\n 3.multiplicacion\n 4.division\n 5.salir del programa\n";
	cout << "ingresa una opcion: ";
	cin >> user_value;
	cin.ignore();
	
	switch (user_value){
		case 1:
			cout << "elegiste la suma";
			break;
			
		case 2:
			cout << "elegiste la resta";
			break;

		case 3:
			cout << "elegiste la multiplicacion";
			break;
			
		case 4:
			cout << "elegiste la division";
			break;
			
		case 5:
			cout << "bye!";
			break;
			
		default:
			cout << "wrong input";
	}
	
	cin.ignore();
	return 0;
}
