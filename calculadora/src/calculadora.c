/*
 ============================================================================
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3.  todas las operaciones
 a)  la suma (A+B)
 b)  la resta (A-B)
 c)  la division (A/B)
 d)  la multiplicacion (A*B)
 e)  el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B

 (donde dice “x” e “y” en el ejemplo, se debe  el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones
 2 Cómo realizar y entregar el trabajo práctico
 El trabajo práctico deberá ser entregado en el repositorio de GIT correspondiente al TP1 de la
 materia.
 El mismo consistirá en el proyecto de CodeBlocks con el programa funcionando y comentado,
 respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar printfs de
 error ni de warnings.
 El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
 hacer uso de dichas funciones para resolver la lógica del programa.
 ============================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include "BibliotecaCalcu.h"
int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int num;
	int num2;
	int resultadoSuma;
	int resultadoDiferencia;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int division;
	int multiplicacion;
	int factorial1;
	int factorial2;
	num2 = 0;
	num = 0;

	printf(
			"\n*********     TRABAJO PRACTICO Nº 1 - CALCULADORA     **************\n");
	printf("\n*********     Chavero Brian 1_E     **************\n");
	do {
		opcion=Menu(num,num2);

		switch (opcion) {
		case 1:
			num = PedirEntero("ingrese primer operando\n");
			break;
		case 2:
			num2 = PedirEntero("ingrese segundo operando\n");
			break;
		case 3:
//			suma
			resultadoSuma = Suma(num, num2);
//			resta
			resultadoDiferencia = Diferencia(num, num2);
//			division
			division = Division((float) num, num2, &resultadoDivision);
//			multiplicacion
			multiplicacion = Multiplicacion(num, num2,
					&resultadoMultiplicacion);
//			factoriales
			factorial1 = Factorial( num);
			factorial2 = Factorial( num2);
			break;

		case 4:

			printf("\nel resultado de %d + %d = %d", num, num2, resultadoSuma);

			printf("\nel resultado de %d + %d = %d", num, num2, resultadoDiferencia);

			if (division == 1) {
				printf("\nel resultado de %.0f / %d = %.1f", (float) num, num2,
						resultadoDivision);
			} else {
				printf("\nNo se puede realizar la division por 0 ");
			}

			if (multiplicacion == 0) {
				printf("\nEl resultado de %d * %d es %d",num,num2,resultadoMultiplicacion);
			} else {
				printf(
						"\nNo se puede realizar la multiplicacion por negativos");
			}

			if (factorial1 == -1 || factorial1 == 0) {
				printf("\nNo se puede  sacar el factorial de negativos, de 0 o de numeros mayores a 12");
			} else {
				printf("\nel factorial de %d es %d",num,factorial1);
			}

			if (factorial2 == -1 || factorial2 == 0) {
				printf("\nNo se puede  sacar el factorial de negativos, de 0 o de numeros mayores a 12");
			} else {
				printf("\nel factorial de %d es %d",num2,factorial2);
			}

			break;
		case 5:
			printf("\n__________________________________________________ \n");
			printf("\nGracias por usar la calculadora!!");
			printf("\n__________________________________________________ \n");
			break;
		default:
			printf("Debe ingresar una opcion entre 1 y 5");
			break;
		}
	} while (opcion != 5);
	return EXIT_SUCCESS;
}
