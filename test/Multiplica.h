#ifndef _MULTIPLICA_H_
#define _MULTIPLICA_H_

#include <iostream>

using std::cout;
using std::endl;

#include <cmath>
#include <unistd.h> 
#include "Archive.h"

/** 
 * @fn 		int ** multiplicaI(T **matrizA, T **matrizB, T **matrizC, int n)
 * @brief	Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa 
 * @param 	T 		matrizA 	Matriz de entrada 
 * @param 	T 		matrizB 	Matriz de entrada 
 * @param 	int 	n 			Dimensao das matrizes (n x n)

 */

template <typename T>
T** multiplica(T **matrizA, T **matrizB, int *linA, int *colALinB, int *colB) {
	//FIXME condicional para garantir que linha A = linha B
	T **matrizC = alocarMatriz<T>(linA, colB);
	
	for (int i = 0; i < *linA; i++)	{		
		for (int j = 0; j < *colALinB; j++)	{
			T soma = 0; 
			for(int k = 0; k < *linA; k++){
				//int pid = fork();
				soma = soma + matrizA[i][k] * matrizB[k][j];
			}
			matrizC[i][j] = soma;
		}
	}
	return matrizC;
}

#endif

//A nxp * B pxm = C nxm
//A 3x4 * B 4x4
//| 0 0 0 0 |   | 4 1 2 3 |    | 0 
//| 1 3 4 5 | * | 1 1 1 1 | =  |
//| 5 1 3 1 |   | 2 3 1 2 |    |
//              | 1 2 3 1 |