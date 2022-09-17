// iteraciones y estructuras condicionales

// Def: las 'statements = declaraciones' se ejecutan en nuestro programa con determinadas
//		acciones. existen 3 grupos principales de declaraciones:
//		selection: if ; switch
//		iteration: while ; for ; do-while
//		jump: break ; continue ; goto ; return

#include <iostream>
using namespace std;

int main(){
	
	int user_value;
	cout << "insert a number ";
	cin >> user_value;
	cin.ignore();
	
	if(user_value < 10)
	{
		cout << "the value is less than 10";
	} else {
		cout << "the value is greater than 10";
	}
	
	cin.ignore();
	
	return 0;
}



/*
int main(){
	int x = 20;
	int y = 18;
	
	if (x>y){
		cout << "x es mayor que y";
	}
	
	return 0;
}
*/
