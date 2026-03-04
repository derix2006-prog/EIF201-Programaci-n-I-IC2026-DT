#include "Inversion.h"
#include <iostream>
using namespace std;

void llenarArreglo(int numeros[], int tam) {
	for (int i = 0; i < tam; i++) {
		cout << "ingrese los numeros uno por uno: ";
		cin >> numeros[i];
	}
}
void MostrarArreglo(int numeros[], int tam) {
	cout << "Arreglo original" << endl ;
	for (int i = 0; i < tam; i++) {
		cout << numeros[i] << " ";
	}
	cout << endl;
}
void CopiarArreglo(int numeros[], int inversion[], int tam) {
	for (int i = 0; i < tam; i++) {
		inversion[i] = numeros[i];
		
	}
}
void Inversion(int inversion[], int tam) {
	cout << "Arreglo inverso " << endl;
	for (int i = tam-1; i >= 0; i--) {
		cout << inversion[i]<< " ";
	
	}
}