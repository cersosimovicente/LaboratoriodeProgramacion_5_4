#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
using namespace std;

/**
5. Leer 15 numeros negativos y convertirlos a positivos e imprimir dichos numeros
*/
int main(int argc, char *argv[]) {
	system("color 30");
	float numero;
	
	for (int i = 1; i<=15; i++){
		cout << "\nIngrese el " << i << " numero negativo: ";
		cin >> numero;
		
		while (numero >= 0){
			cout << "\nEl n�mero no es negativo. Ingreselo nuevamente\n";
			cout << "Ingrese el " << i << " numero negativo: ";
			cin >> numero;
		}
		
		cout << "El numero " << numero << " convetido a positivo es: " << abs(numero) << endl;
		
	}
	
	return 0;
}

