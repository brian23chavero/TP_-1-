/*
 * BibliotecaCalcu.c
 *
 *  Created on: 19 sep. 2021
 *      Author: sofiaailen2argentina
 */
#include <stdio.h>
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

int Multiplicacion(int num1, int num2, int *resultado) {
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

int Factorial(int numero) {
	int factorial;

	factorial = 1;
	if (numero == 0) {
		factorial = 0;
	} else {
		if (numero < 0 || numero>=13) {
			factorial = -1;
		}
	}
	while (numero > 1) {
		factorial = factorial * numero;
		numero--;
	}
	return factorial;
}

int Menu(int num1,int num2){
	int opcion;
	int flag;
	int flag2;
	flag=0;
	flag2=0;
	if (flag) {
				printf("\n1. para ingresar el primer operando \n");
			} else {
				printf("\n\n1. el primer operando es A=%d", num1);
			}
			if (flag2) {
				printf("\n2. para ingresar el primer operando \n");
			} else {
				printf("\n2. el segundo operando es B=%d", num2);
			}
			printf("\n3. para calcular las operaciones\n");
			printf("4. para informar los resultados\n");
			printf("5. para finalizar\n");
			printf("Elija una opcion: \n");
			scanf("%d", &opcion);
			return opcion;
}
