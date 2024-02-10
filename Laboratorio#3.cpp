#include <iostream>
#include <math.h>
using namespace std;

void operaciones();
float suma(float num1, float num2);
float resta(float num1, float num2);
float multiplicacion(float num1, float num2);
float division(float num1, float num2);

void calcularPotencia();

void numeroPrimo();
bool prim(int numPrimo);

void esBisiesto();

void repeticion();

char respuesta;
bool repetir;


int main(){
	do{
		system("cls");
		int opcion;
		cout << "\tMenu:\n\n";
		cout << "1. Mini calculadora\n";
		cout << "2. Calculadora de potencias\n";
		cout << "3. Comprobacion de numeros primos\n";
		cout << "4. Comprobar si el anio es bisiesto\n";
		cout << "5. Salir del menu\n";
		cout << "Opcion a elegir: ";
		cin >> opcion;
		
		switch(opcion){
			 case 1:
			 	operaciones();
			 	repeticion();
			 	break;
			case 2:
				calcularPotencia();
				repeticion();
				break;
			case 3:
				numeroPrimo();
				repeticion();
				break;
			case 4:
				esBisiesto();
				repeticion();
				break;
			case 5:
				repetir = false;
				break;
			default:
				repetir = true;	
		}	
	} while(repetir == true);
	
	
	return 0;
}

void esBisiesto(){
	system("cls");
	int anio;
	cout << "\tVerficacion para comprobar si el año ingresado es bisiesto\n\n";
	cout << "Ingrese el anio que desea comprobar: ";
	cin >> anio;
	if ((anio % 4) == 0){
		cout << "\nEl anio " << anio << " es bisiesto\n\n";
	}
	else{
		cout << "\nEl anio " << anio << " no es bisiesto\n\n";
	}
	system("pause");
}

void numeroPrimo(){
	system("cls");
	int numPrimo;
	int esPrimo;
	bool comprobar;
	cout << "\tVerificacion de numeros primos\n\n";
	cout << "Ingrese el entero numero a comprobar: ";
	cin >> numPrimo;
	
	if(numPrimo == 1 or numPrimo == 0){
		cout << "\nEl numero " << numPrimo << " no es primo ni compuesto\n";
		system("pause");
		return;
	}
	
	comprobar = prim(numPrimo);
	
	if(comprobar == true){
		cout << "El numero ingresado es primo\n";
	}
	else
		cout << "El numero ingresado no es primo\n";
		
	system("pause");
}

bool prim(int numPrimo){
	int z = 1;
	while(z <= (numPrimo / 2)){
		z++;
		if ((numPrimo % z) == 0)
			return false;
	}
	return true;
}

void calcularPotencia(){
	system("cls");
	float base;
	int exponente;
	cout << "\tLa potencia de un numero" << endl << endl;
	cout << "Elige la base del numero: ";
	cin >> base;
	cout << "Elige el exponente del numero: ";
	cin >> exponente;
	
	cout << "\nEl resultado del numero con base " << base << " y exponente " << exponente << " es: " << pow(base, exponente);
	system("pause");
}

void operaciones(){
	system("cls");
	int operacion, num1, num2;
	cout << "\tMini calculadora\n\n";
	cout << "1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n\n";
	cout << "Elige la operacion que deseas realizar: ";
	cin >> operacion;
	system("cls");
	switch (operacion) {
	case 1: 
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << suma(num1, num2);
		break;
	case 2:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << resta(num1, num2);
		break;
	case 3:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "Ingrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << multiplicacion(num1, num2);
		break;
	case 4:
		cout << "Ingrese el 1er numero: ";
		cin >> num1;
		cout << "INgrese el 2do numero: ";
		cin >> num2;
		cout << "El resultado es: " << division(num1, num2);
		break;
	}
	if(num1 == num2)
		cout << endl << endl<<"Ambos numeros son iguales" << endl;
	else
		cout << endl  << endl<<"Los numeros no son iguales" << endl;
	
	system("pause");
}

float suma(float num1, float num2) {
	float resultado;
	resultado = num1 + num2;
	return resultado;
}

float resta(float num1, float num2) {
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

float multiplicacion(float num1, float num2) {
	float resultado;
	resultado = num1 * num2;
	return resultado;
}

float division(float num1, float num2) {
	float resultado;
	resultado = num1 / num2;
	return resultado;
}

void repeticion(){
	do{
		system("cls");
		cout << "Desea realizar otra accion? S/N: ";
		cin >> respuesta;
	} while(respuesta !='n' and respuesta !='N' and respuesta !='S' and respuesta !='s');
		
	if (respuesta == 's' or respuesta == 'S'){
		repetir = true;
	}
	else if (respuesta == 'n' or respuesta == 'N'){
		repetir = false;
	} 
}
