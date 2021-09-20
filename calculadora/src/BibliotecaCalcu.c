/*
 * BibliotecaCalcu.c
 *
 *  Created on: 19 sep. 2021
 *      Author: sofiaailen2argentina
 */
#include "BibliotecaCalcu.h"
int PedirEntero(char mensaje[]) {
	int numeroIngresado;
	printf("%s", mensaje);
	scanf("%d", &numeroIngresado);
	return numeroIngresado;
}

int Suma(int num1, int num2) {
	int resultado;
	resultado = num1 + num2;
	return resultado;
}

int Diferencia(int num1, int num2) {
	int resultado;
	resultado = num1 - num2;
	return resultado;
}

int Division(int num1, int num2, float *resultado) {
	float resultadoFinal;
	int flag;
	flag = 0;
	if (resultado != NULL && num2 != 0) {
		resultadoFinal = (float) num1 / num2;
		*resultado = resultadoFinal;
		flag = 1;
	}
	return flag;
}
int Multiplicacion(int num1, int num2, float *resultado) {
	int resultadoFinal;
	int flag;
	flag = 1;
	if (resultado != NULL && num2>0) {
		resultadoFinal = num1 * num2;
		*resultado = resultadoFinal;
		flag = 0;
	}
	return flag;
}
long int Factorial(long int numero) {
	int factorial;

	factorial = 1;
	if (numero == 0) {
		factorial = 0;
	} else {
		if (numero < 0) {
			factorial = -1;
		}
	}
	while (numero > 1) {
		factorial = factorial * numero;
		numero--;
	}
	return factorial;
}
void MensajeFactorial(char mensaje[],int num2,char mensaje2[],long int num) {
	printf("%s %d %s %li ", mensaje, num2,mensaje2,num);
}
void Mostrar(char mensaje[], int num, char mensaje2[], int num2,
		char mensaje3[], long int  num3) {
	printf("%s %d %s %d %s %li", mensaje, num, mensaje2, num2, mensaje3, num3);
}
void Mensaje(char mensaje[]) {
	printf("%s", mensaje);
}
