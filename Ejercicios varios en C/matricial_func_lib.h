/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Universidad Sergio Arboleda
 * Escuela de ciencias exactas e ingeniería
 * Programa de ciencias de la computación e inteligencia artificial
 * Asignatura: Parallel and Distributed Computing
 * Estudiante: Jesús Chaves Acero
 * Fecha: 03 agosto 2022
 * Grupo: G01
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef MATRICIAL_FUNC_LIB_H_DEFINE
#define MATRICIAL_FUNC_LIB_H_DEFINE

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* Función de llenado */
void crear_matriz(int matriz[], int n);

/* Función de visualización */
void visualizar_matriz(int matriz[], int n);

/* Se realiza la suma entre las matrices A y B y se almacena el resultado en una matriz C */
void suma_matrices(int matrizA[], int matrizB[], int matrizC[], int n);

/* Se realiza la resta entre las matrices A y B y se almacena el resultado en una matriz C */
void resta_matrices(int matrizA[], int matrizB[], int matrizC[], int n);

/* Se realiza la multiplicación entre las matrices A y B y se almacena el resultado en una matriz C */
void multiplicacion_matrices(int matrizA[], int matrizB[], int matrizC[], int n);

/* Iniciar matriz de unos */
void matriz_unos(int matriz[], int n);

#endif