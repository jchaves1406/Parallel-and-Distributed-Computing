/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Universidad Sergio Arboleda
 * Escuela de ciencias exactas e ingeniería
 * Programa de ciencias de la computación e inteligencia artificial
 * Asignatura: Parallel and Distributed Computing
 * Estudiante: Jesús Chaves Acero
 * Fecha: 03 agosto 2022
 * Grupo: G01
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "taller_c_func_lib.h"
#include "matricial_func_lib.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* 1. Escribe un programa en C que acepte dos enteros del usuario y calcule el producto de los dos enteros.  
* Datos de prueba: 
* Introduzca el primer entero: 25 
* Introduzca el segundo entero: 15 
* Salida esperada: 
* Producto de los dos enteros anteriores = 375*/ 
void ejercicio1(){
	int numero_a, numero_b, resultado;
	printf("Introduzca el primer número: ");
	scanf("%d", &numero_a);
	printf("Introduzca el segundo número: ");
	scanf("%d", &numero_b);
	resultado = numero_a * numero_b;
	printf("El producto entre los dos números enteros es: %d \n", resultado);
}

/* 2. Escribe un programa en C para convertir los días especificados en años, semanas y días.
* Nota: Ignore el año bisiesto. 
* ----- Datos de prueba -----
* Número de días: 1329
* Salida esperada:
* Años: 3	
* Semanas 33
* Días: 3*/
void ejercicio2(){
	int n_dias, anios, semanas, dias;
	printf("Ingresa el número total de días: ");
	scanf("%d", &n_dias);
	anios = n_dias/365;
	semanas = (n_dias - anios*365)/7;
	dias = (n_dias - anios*365) - (semanas*7);
	printf("%d días equivalen a %d Años, %d Semanas y %d días. \n", n_dias, anios, semanas, dias);
}

/* 3. Escribe un programa en C para calcular la distancia entre los dos puntos. 
* Datos de prueba:
* Entrada x1: 25
* Entrada y1: 15
* Entrada x2: 35
* Entrada y2: 10
* Resultado esperado:
* Distancia entre dichos puntos: 11.1803*/
void ejercicio3(){
	int x_1, x_2, y_1, y_2;
	double resultado1;

	printf("Ingrese valores para x_1: ");
	scanf("%d", &x_1);
	printf("Ingrese valores para y_1: ");
	scanf("%d", &y_1);
	printf("Ingrese valores para x_2: ");
	scanf("%d", &x_2);
	printf("Ingrese valores para y_2: ");
	scanf("%d", &y_2);
	resultado1 = sqrt(pow(x_2-x_1, 2) + pow(y_2-y_1, 2));
	printf("La distancia entre los puntos (%d, %d) y (%d, %d) es: %f \n",x_1, y_1, x_2, y_2, resultado1);
}

/* 4.- Escribe un programa en C para mostrar los 10 primeros números naturales.
* Salida esperada: 1 2 3 4 5 6 7 8 9 10*/
void ejercicio4(){
	printf("Secuencia de los 10 primeros numeros naturales. ");
	for (int i = 1; i < 11; i++){
		printf("%d ", i);
	}
	printf("\n");
}

/* 5. Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
* asterisco. La cantidad de líneas del triángulo es ingresada por consola por el usuario, y el valor
* máximo de líneas es de 14.
* El patrón como:
* *
* **
* ***
* ****                                                */
void ejercicio5(){
	int lineas;
	do{
		printf("Ingrese el número de lineas del triángulo (maximo 14): ");
		scanf("%d", &lineas);
		if (lineas <= 14){
			for (int i = 1; i <= lineas; i++){
				for (int j = 0; j < i; j++){
					printf("* ");
				}
				printf("\n");
			}
		}
	} while (lineas > 14);
}

/* 6.- Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
* indicado por el usuario y debe ser siempre menor que 8. */
void ejercicio6(){
	int SIZE, tamanio;
	do{
		printf("Ingrese el tamaño de la matriz N x N, el tamaño debe ser menor a 8: ");
		scanf("%d", &tamanio);
		SIZE = tamanio*tamanio;
		if (tamanio < 8){
			 printf("\nMatriz cuadrada de unos de tamaño %d x %d: \n\n", tamanio, tamanio);
			int matriz[SIZE];
			matriz_unos(matriz, tamanio);
			visualizar_matriz(matriz, tamanio);
		}
	} while (tamanio >= 8);
}

/* 7. Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
* de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8. */
void ejercicio7(){
	int SIZE, tamanio;
	do{
		printf("Ingrese el tamaño de la matriz N x N, el tamaño debe ser menor a 8: ");
		scanf("%d", &tamanio);
		SIZE = tamanio*tamanio;
		if (tamanio < 8){
			printf("\nMatriz cuadrada de números aleatorios entre 0 y 9 de tamaño %d x %d: \n\n", tamanio, tamanio);
			int matriz[SIZE];
			crear_matriz(matriz, tamanio);
			visualizar_matriz(matriz, tamanio);
		}
	} while (tamanio >= 8);
}

/* 8.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
* tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
* Finalmente, se presenta la suma de las dos matrices. */
void ejercicio8(){
	int SIZE, tamanio;
	do{
		printf("Ingrese el tamaño de la matriz N x N, el tamaño debe ser menor a 8: ");
		scanf("%d", &tamanio);
		SIZE = tamanio*tamanio;
		if (tamanio < 8){
			printf("\nMatrices cuadradas de números entre 0 y 9 de tamaño %d x %d: \n\n", tamanio, tamanio);
			printf("Matriz 1: \n");
			int matriz1[SIZE], matriz2[SIZE], matriz3[SIZE];
			crear_matriz(matriz1, tamanio);
			visualizar_matriz(matriz1, tamanio);

			printf("\nMatriz 2: \n");
			crear_matriz(matriz2, tamanio);
			visualizar_matriz(matriz2, tamanio);

			printf("\nSuma de matrices: \nMatriz 1 * Matriz 2: \n");
			suma_matrices(matriz1, matriz2, matriz3, tamanio);
			visualizar_matriz(matriz3, tamanio);
		}
	} while (tamanio >= 8);
}

/* 9.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
* tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
* Finalmente, se presenta la resta de las dos matrices. */
void ejercicio9(){
	int SIZE, tamanio;
	do{
		printf("Ingrese el tamaño de la matriz N x N, el tamaño debe ser menor a 8: ");
		scanf("%d", &tamanio);
		SIZE = tamanio*tamanio;
		if (tamanio < 8){
			printf("\nMatrices cuadradas de números entre 0 y 9 de tamaño %d x %d: \n\n", tamanio, tamanio);
			printf("Matriz 1: \n");
			int matriz1[SIZE], matriz2[SIZE], matriz3[SIZE];
			crear_matriz(matriz1, tamanio);
			visualizar_matriz(matriz1, tamanio);

			printf("\nMatriz 2: \n");
			crear_matriz(matriz2, tamanio);
			visualizar_matriz(matriz2, tamanio);

			printf("\nResta de matrices: \nMatriz 1 * Matriz 2: \n");
			resta_matrices(matriz1, matriz2, matriz3, tamanio);
			visualizar_matriz(matriz3, tamanio);
		}
	} while (tamanio >= 8);
}

/* 10.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
* tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
* Finalmente, se presenta el producto de las dos matrices. */
void ejercicio10(){
	int SIZE, tamanio;
	do{
		printf("Ingrese el tamaño de la matriz N x N, el tamaño debe ser menor a 8: ");
		scanf("%d", &tamanio);
    	SIZE = tamanio*tamanio;
		if (tamanio < 8){
			printf("\nMatrices cuadradas de números entre 0 y 9 de tamaño %d x %d: \n\n", tamanio, tamanio);
			printf("Matriz 1: \n");
			int matriz1[SIZE], matriz2[SIZE], matriz3[SIZE];
			crear_matriz(matriz1, tamanio);
			visualizar_matriz(matriz1, tamanio);

			printf("\nMatriz 2: \n");
			crear_matriz(matriz2, tamanio);
			visualizar_matriz(matriz2, tamanio);

			printf("\nProducto de matrices: \nMatriz 1 * Matriz 2: \n");
			multiplicacion_matrices(matriz1, matriz2, matriz3, tamanio);
			visualizar_matriz(matriz3, tamanio);
		}
	} while (tamanio >= 8);
}

void menu(){
	bool estado = false;
	int opcion;

	do{
		printf("\n* * * * * * * * * * * * * * * * * * * * * \n");
		printf("*\t Ejercicios varios en c \t*\n");
		printf("* * * * * * * * * * * * * * * * * * * * * \n\n");
		printf("1. Producto entre dos enteros. \n");
		printf("2. Días a Años/Semanas/Días. \n");
		printf("3. Distancia entre dos puntos. \n");
		printf("4. 10 primeros números naturales. \n");
		printf("5. Triángulo rectángulo con asteriscos. \n");
		printf("6. Matriz N x N de unos. \n");
		printf("7. Matriz N x N con números aleatorios entre 0 y 9. \n");
		printf("8. Suma entre dos matrices N x N con números aleatorios entre 0 y 9. \n");
		printf("9. Resta entre dos matrices N x N con números aleatorios entre 0 y 9. \n");
		printf("10. Producto entre dos matrices N x N con números aleatorios entre 0 y 9. \n");
		printf("11. Salir. \n");
		printf("\nIngrese alguna de las opciones: ");
		scanf("%d", &opcion);
		switch (opcion){
		case 1: ejercicio1();
			break;
		case 2: ejercicio2();
			break;
		case 3: ejercicio3();
			break;
		case 4: ejercicio4();
			break;
		case 5: ejercicio5();
			break;
		case 6: ejercicio6();
			break;
		case 7: ejercicio7();
			break;
		case 8: ejercicio8();
			break;
		case 9: ejercicio9();
			break;
		case 10: ejercicio10();
			break;
		case 11: printf("Saliendo del programa.");
			estado = true;
			break;
		default: printf("Digite una de las opciones (1 - 11).\n");
			break;
		}
		printf("\n------------------------------------------------------------------------------------------\n");
	} while (!estado);
}