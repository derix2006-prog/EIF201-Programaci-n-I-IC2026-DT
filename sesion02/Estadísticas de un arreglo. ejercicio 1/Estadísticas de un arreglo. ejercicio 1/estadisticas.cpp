#include "ESTADISTICAS.H"



int EncontrarMayor(int numeros[], int tam) {
	int mayor = numeros[0]; 

	for (int i = 1; i < TAM; i++) {
		if (numeros[i] > mayor) {
			mayor = numeros[i]; 
		}
	}
	return mayor;
}
int EncontrarMenor(int numeros[], int tam) {
	int menor = numeros[0]; 
	for (int i = 1; i < TAM; i++) {
		if (numeros[i] < menor) {
			menor = numeros[i]; 
		}
	}
	return menor; 
}
int SumaArreglo(int numeros[], int tam) {
	int suma = numeros[0];
	for (int i = 1; i < TAM; i++) {
		suma += numeros[i]; 
    }
	return suma;
}
double PromedioAritmetico(int numeros[], int tam) {
	int suma = SumaArreglo(numeros, TAM);
	double promedio = (double)suma / TAM; 
	return promedio; 
}
