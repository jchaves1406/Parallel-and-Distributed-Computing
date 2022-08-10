/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Universidad Sergio Arboleda
 * Escuela de ciencias exactas e ingeniería
 * Programa de ciencias de la computación e inteligencia artificial
 * Asignatura: Parallel and Distributed Computing
 * Estudiante: Jesús Chaves Acero
 * Fecha: 03 agosto 2022
 * Grupo: G01
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef TALLER_C_FUNC_LIB_H_INCLUDED
#define TALLER_C_FUNC_LIB_H_INCLUDED

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
void ejercicio1();

/* 2. Escribe un programa en C para convertir los días especificados en años, semanas y días.
 * Nota: Ignore el año bisiesto. 
 * ----- Datos de prueba -----
 * Número de días: 1329
 * Salida esperada:
 * Años: 3	
 * Semanas 33
 * Días: 3*/
void ejercicio2();

/* 3. Escribe un programa en C para calcular la distancia entre los dos puntos. 
 * Datos de prueba:
 * Entrada x1: 25
 * Entrada y1: 15
 * Entrada x2: 35
 * Entrada y2: 10
 * Resultado esperado:
 * Distancia entre dichos puntos: 11.1803*/
void ejercicio3();

/* 4.- Escribe un programa en C para mostrar los 10 primeros números naturales.
 * Salida esperada: 1 2 3 4 5 6 7 8 9 10*/
void ejercicio4();

/* 5. Escribe un programa en C para mostrar el patrón como triángulo rectángulo usando un
 * asterisco. La cantidad de líneas del triángulo es ingresada por consola por el usuario, y el valor
 * máximo de líneas es de 14.
 * El patrón como:
 * *
 * **
 * ***
 * ****                                                */
void ejercicio5();

/* 6.- Escribe un programa que imprima una matriz de “1”, de tamaño NxN. El tamaño es
 * indicado por el usuario y debe ser siempre menor que 8. */
void ejercicio6();
/* 7. Escribe un programa que imprima una matriz de números aleatorios enteros, entre 0 y 9, de
 * de tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8. */
void ejercicio7();

/* 8.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
 * tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
 * Finalmente, se presenta la suma de las dos matrices. */
void ejercicio8();

/* 9.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
 * tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
 * Finalmente, se presenta la resta de las dos matrices. */
void ejercicio9();

/* 10.- Escribe un programa que muestre dos matrices de números aleatorios, entre 0 y 9, de
 * tamaño NxN. El tamaño es indicado por el usuario y debe ser siempre menor que 8.
 * Finalmente, se presenta el producto de las dos matrices. */
void ejercicio10();

/* Implementacion de un menu para el desarrollo del taller el cual tendra como responsabilidad
 * dirigir a cada una de las funciones dispuestas en el taller. */ 
void menu();

#endif