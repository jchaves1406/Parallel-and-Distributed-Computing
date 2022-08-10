/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Universidad Sergio Arboleda
 * Escuela de ciencias exactas e ingeniería
 * Programa de ciencias de la computación e inteligencia artificial
 * Asignatura: Parallel and Distributed Computing
 * Estudiante: Jesús Chaves Acero
 * Fecha: 03 agosto 2022
 * Grupo: G01
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#include "matricial_func_lib.h"
#include "taller_c_func_lib.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* Función de llenado */
void crear_matriz(int matriz[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i+j*n] = rand()%10;
        }
    }
}

/* Función de visualización */
void visualizar_matriz(int matriz[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%d\t", matriz[i+j*n]);
        }
        printf("\n");
    }
    printf("\n");
}

/* Se realiza la suma entre las matrices A y B y se almacena el resultado en una matriz C */
void suma_matrices(int matrizA[], int matrizB[], int matrizC[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrizC[i+j*n] = matrizA[i+j*n] + matrizB[i+j*n];
        }
    }
}

/* Se realiza la resta entre las matrices A y B y se almacena el resultado en una matriz C */
void resta_matrices(int matrizA[], int matrizB[], int matrizC[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matrizC[i+j*n] = matrizA[i+j*n] - matrizB[i+j*n];
        }
    }
}

/* Se realiza la multiplicación entre las matrices A y B y se almacena el resultado en una matriz C */
void multiplicacion_matrices(int matrizA[], int matrizB[], int matrizC[], int n){
    int acum;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            acum = 0;
            for (int k = 0; k < n; k++){
                acum += matrizA[j+k*n] * matrizB[k+i*n];
            }
            matrizC[j+i*n] = acum;
        }
    }
}

/* Iniciar matriz de unos */
void matriz_unos(int matriz[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            matriz[i+j*n] = 1;
        }
    }
}