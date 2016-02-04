#include <iostream>
using namespace std;


int main(){
//Variable.- es una entidad que almacena nuetro programa cuyo valor puede cambiar a lo largo de la ejecucion
//Constante.- es una entidad que alamcena nuestro programa cuyo valor no cambia a lo largo de la ejecucuion
//Operando.- cad una de las constantes, variables o expresiones que intervienen en un expresion.
//Operador.-  cada uno de los simbolor que indican las operaciones a realizar sobre los operandos, asi como los operandos que afecta.
//Expresion.- cualquier conjunto de operadores y operandos que dan como resultado un valor.


	//NUNCA EN MI VIDA VOY A HACER ESTO 34 + 25 = suma;
	//OPERADORES ARITMETICOS
	int  suma = 34 + 25;
	int resta = 34 - 25;
	double multiplicacion = 34 * 25;
	double division = 34 / 25;
	int residuo = 34 % 25;
	
	//Incrementos y decrementos
	suma = 5;
	resta = 5;
	cout << suma<<endl;
	//suma ++; // post incremento
	cout <<suma++<<endl;
	//++ suma; //pre incremento
	cout <<++suma<<endl;
	cout << resta<<endl;
	//resta --; //post decremento
	cout <<resta--<<endl;
	//-- resta; // pre decremento
	cout <<--resta<<endl;
	int c = 0,a = 5,b = 5,d = 0;

	cout <<"a: "<<a<<endl;
	cout <<"b: " <<b<<endl;
	c = a + ++b;
	cout<<"despues de la expresion"<<endl;
	cout <<"a: " <<a<<endl;
	cout <<"b: " <<b<<endl;
	cout <<"C: "<<c<<endl;

	//operadores de asignacion
	// = *= /= %= += -= <<= =>> &= ^= |=
	int j;
	j*= 23;
	j = j * 23;
	char palabra [] = {'l','a'};
	//operador coma
	//la coma tiene doble funcion 
	//separa elementos de una lista de argumentos en una funcion 
	//puede ser usado como separador en expreiones
	
	//Operadores de comparacion
	// == != < > <= >= 
	if(   a == b  ){
	
	}

	//Operadores LOGICOS
	//    || && !
		if(   a == b || b != c ){
	
	}
	
	system("pause");
	return 0;
}
