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
 respetando las reglas de estilo de la cátedra. La compilación no deberá arrojar mensajes de
 error ni de warnings.
 El proyecto deberá contar con la biblioteca descripta en la sección número dos, y se deberá
 hacer uso de dichas funciones para resolver la lógica del programa.
 ============================================================================
 */

#include <stdlib.h>
#include "BibliotecaCalcu.h"

int main(void) {
	setbuf(stdout, NULL);
	int opcion;
	int num;
	int num2;
	float resultadoSuma;
	float resultadoDiferencia;
	float resultadoDivision;
	float resultadoMultiplicacion;
	int division;
	int multiplicacion;
	int factorial1;
	int factorial2;

	Mensaje("\n*********     TRABAJO PRACTICO Nº 1 - CALCULADORA     **************\n");
	Mensaje("\n*********     Chavero Brian 1_E     **************\n");
	do {
		Mensaje("\n1. para ingresar el primer operando \n");
		Mensaje("2. para ingresar el segundo operando \n");
		Mensaje("3. para calcular las operaciones\n");
		Mensaje("4. para informar los resultados\n");
		Mensaje("5. para finalizar\n");
		Mensaje("Elija una opcion: \n");
		scanf("%d", &opcion);
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
			factorial1 = Factorial((float) num);
			factorial2 = Factorial((float) num2);
			break;

		case 4:

			Mostrar("\nel resultado de ", num, " + ", num2, "=", resultadoSuma);

			Mostrar("\nel resultado de ", num, " - ", num2, "=",resultadoDiferencia);
			if (division == 1) {
				Mostrar("\nel resultado de ", (float) num, " / ", num2, "=",resultadoDivision);
			} else {
				Mensaje("\nNo se puede realizar la division por 0 ");
			}
			if (multiplicacion == 0) {
				Mostrar("\nEl resultado de ", num, " * ", num2, "=",resultadoMultiplicacion);
			} else {
				Mensaje("\nNo se puede realizar la multiplicacion por negativos");
			}
			if (factorial1 == -1 || factorial1==0) {
				Mensaje("\nNo se puede  sacar el factorial de negativos ni de 0");
			} else {
				MensajeFactorial("\nel factorial de ", num, " es ", factorial1);
			}
			if (factorial2 == -1|| factorial1==0) {
				Mensaje("\nNo se puede  sacar el factorial de negativos ni de 0");
			} else {
				MensajeFactorial("\nel factorial de ", num2, " es ",factorial2);
			}
			break;
		case 5:
			Mensaje("\n__________________________________________________ \n");
			Mensaje("\nGracias por usar la calculadora!!");
			Mensaje("\n__________________________________________________ \n");
			break;
		default:
			break;
		}
	} while (opcion != 5);
	return EXIT_SUCCESS;
}
