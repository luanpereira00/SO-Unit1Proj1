#ifndef _MULTIPLICA_H_
#define _MULTIPLICA_H_

#include <iostream>

using std::cout;
using std::endl;

#include <cmath>

#include "Archive.h"

/** 
 * @fn 		int ** multiplicaI(T **matrizA, T **matrizB, T **matrizC, int n)
 * @brief	Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa 
 * @param 	T 		matrizA 	Matriz de entrada 
 * @param 	T 		matrizB 	Matriz de entrada 
 * @param 	int 	n 			Dimensao das matrizes (n x n)
 * @return 	0
 */
template <typename T>
T** multiplicaI(T **matrizA, T **matrizB, int linhaA, int colALinhaB, int colB) {
	T **matrizC = alocarMatriz(&linhaA, &colB);
	
	for (int i = 0; i < n; i++)	{		
		for (int j = 0; j < n; j++)	{
			T soma = 0; 

			for(int k = 0; k < n; k++){
				soma = soma + matrizA[i][k] * matrizB[k][j];
			}
			matrizC[i][j] = soma;
		}
	}
	return 0;
}

#endif