/*
 * BibliotecaCalcu.h
 */
#include <stdio.h>

/*
 * pide un numero entero
 * lo guarda en el scanf
 * y retorna un numero
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

int Multiplicacion(int num1, int num2, float *resultado);
/*
 * Saca el factorial de los numeros
 * toma como parametro un numero log int
 * retorna 0 si se pudo realizar y 1 en caso contrario */

 long int Factorial( long int numero);
/*
 * Muestra los resultados
 * pide como parametros dos numeros enteros, un long int y tres cadenas de caracteres
 * sin retorno solo muestra el mensaje */
void Mostrar(char mensaje[], int num, char mensaje2[], int num2,char mensaje3[],long int  num3);
/*
 * Muestra el resultado de factorial
 * pide como parametros ,un entero, long int y dos cadenas de caracteres
 * sin retorno solo muestra  */
void MensajeFactorial(char mensaje[],int num2,char mensaje2[],long int num);
/*
 * Muestra un mensaje
 * tiene como parametro una cadena de caracteres
 * sin retorno solo muestra un mensaje  */
void Mensaje(char mensaje[]);



