#ifndef _MULTIPLICA_H_
#define _MULTIPLICA_H_

#include <iostream>
using std::cout;
using std::endl;

#include <unistd.h> 

#include "Archive.h"

/** 
 * @fn 		T multiplica2(T **matrizA, T **matrizB, int *apontI, int *apontJ, int colALinhaB) 
 * @brief	Funcao que multiplica duas matrizes quadradas de dimensao n x n de forma iterativa 
 * @param 	matrizA 	T 		Matriz de entrada 
 * @param 	matrizB		T 		Matriz de entrada 
 * @param 	matrizC 	T 		Matriz de resultante 
 * @param  	apontI		int*	apontador para o valor do iterador 'i' do laço da função principal
 * @param  	apontJ		int*	apontador para o valor do iterador 'j' do laço da função principal
 * @param  	colB		int		quantidade de linhas de B e de colunas de A
 * @return 	soma		Resultado da soma
 */
template <typename T>
T multiplica2(T **matrizA, T **matrizB, int *apontI, int *apontJ, int colALinhaB) {
	int soma = 0;
	for (int k = 0; k < colALinhaB; k++) {
		soma += matrizA[*apontI][k] * matrizB[k][*apontJ];
	}

	return soma;
}

/** 
 * @fn 		T** multiplica(T **matrizA, T **matrizB, int *linhaA, int *colALinhaB, int *colB)
 * @brief	Funcao que multiplica duas matrizes de forma iterativa e retorna a matriz resultante
 * @param 	matrizA 	T 		Matriz de entrada 
 * @param 	matrizB		T 		Matriz de entrada 
 * @param  	linhaA		int*	apontador para o valor da quantidade de linhas da matriz A
 * @param  	colALinhaB	int*	apontador para o valor da quantidade de colunas da matriz A e linhas da matriz B
 * @param  	colB		int*	apontador para o valor da quantidade de colunas da matriz B
 * @return 	matrizC
 */
template <typename T>
T** multiplica(T **matrizA, T **matrizB, int *linhaA, int *colALinhaB, int *colB) {
	int i = 0, j = 0;
	int *apontI = &i;
	int *apontJ = &j;

	T **matrizC = alocarMatriz<T>(linhaA, colB);	
 
	for (i = 0; i < *linhaA; i++) {  
        for (j = 0; j < *colB; j++) {  
        	matrizC[i][j] = multiplica2<T>(matrizA, matrizB, apontI, apontJ, (*colALinhaB));
        }
    }

    return matrizC;
}

#endif