#include "Matriz.h"
#include <iostream>
#include <iomanip>
using namespace std; 

void LeerMatriz(int Matriz[Filas][Columnas]) {
	for (int i = 0; i < Filas; i++) {
		for (int j = 0; j < Columnas; j++) {
			cout << "Ingrese numeros para la matriz: "; 
			cin >> Matriz[i][j]; 
		}
	}
}
void MostrarMatriz(int Matriz[Filas][Columnas]) {
	for (int i = 0; i < Filas; i++) {
		for (int j = 0; j < Columnas; j++) {
			cout << setw(3) << Matriz[i][j]; 
		}
		cout << endl; 
	}
}
void SumaFilas(int Matriz[Filas][Columnas]) {
	for (int i = 0; i < Filas; i++) {
		int sumaF = 0; 
		for (int j = 0; j < Columnas; j++) {
			sumaF += Matriz[i][j]; 
		}
		cout << "suma de la fila " << i + 1 <<": "<< sumaF << endl;
	}
}
void SumaColumnas(int Matriz[Filas][Columnas]) {
	for (int j = 0; j < Columnas; j++) {
		int sumaC = 0;
		for (int i = 0; i < Filas; i++) {
			sumaC += Matriz[i][j];
		}
		cout << "suma de columna " << j + 1 << ": " << sumaC << endl;
	}
}