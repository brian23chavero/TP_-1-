/*
 * BibliotecaCalcu.h
 */
#include <stdio.h>

/*
 * pide un numero entero
 * lo guarda en el scanf
 * y retorna el mensaje a ingresar
 * */
int PedirEntero(char mensaje[]);

/*
 * Realiza la suma
 * pide como parametros dos numeros enteros
 * retorna el resultado de la suma */
int Suma(int num1, int num2);

/*
 * Realiza la resta
 * pide como parametros dos numeros enteros
 * retorna el resultado de la resta */
int Diferencia(int num1, int num2);

/*
 * Realiza la division
 * pide como parametros dos numeros enteros
 * retorna 1 si se pudo realizar y 0 en caso contrario */
int Division(int num1, int num2, float *resultado);

/*
 * Realiza la Multiplicacion
 * pide como parametros dos numeros enteros y un puntero
 * retorna 0 si se pudo realizar y 1 en caso contrario */
int Multiplicacion(int num1, int num2, int *resultado);

/*
 * Saca el factorial de los numeros
 * toma como parametro un numero int
 * retorna 0 si se pudo realizar y 1 en caso contrario */
int Factorial(int numero);

/*
 * Menu de opciones
 * los parametros son dos numeros enteros
 * retora el numero de la opcion*/
int Menu(int num1,int num2);
