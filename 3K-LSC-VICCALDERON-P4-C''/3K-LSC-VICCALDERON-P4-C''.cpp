// 3K-LSC-VICCALDERON-P4-C''.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include<stdlib.h>

#define maxf  3
#define maxc  5

using namespace std;

int main(int argc, char* argv[])
{

	float a[maxf][maxc];
	int f, c;

	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << "Ingrese los digitos: ";
			cin >> a[f][c];
		}
	}

	cout << "\n";

	for (f = 0; f < maxf; f++) {
		for (c = 0; c < maxc; c++) {
			cout << a[f][c] << " ";
		}
		cout << endl;
	}

	cout << "\n";

	system("pause");
	return EXIT_SUCCESS;
}