// Estadísticas de un arreglo. ejercicio 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "ESTADISTICAS.H"
using namespace std; 


int main()
{
	int numeros[TAM];

	for (int i = 0; i < TAM; i++) {
		cout << "ingrese un numero: ";
		cin >> numeros[i];
	}
	int mayor = EncontrarMayor(numeros,TAM);
    cout << "El numero mayor es: " << mayor << endl;

	int menor = EncontrarMenor(numeros,TAM);
	cout << "El numero menor es: " << menor << endl; 

	int suma = SumaArreglo(numeros, TAM); 
	cout << "El resultado de la suma del arreglo es: " << suma << endl; 

	double promedio =  PromedioAritmetico(numeros,TAM);
	cout << "EL promedio aritmetico del arreglo es: " << promedio << endl; 
	return 0;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
