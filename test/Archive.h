#ifndef _ARCHIVE_H_
#define _ARCHIVE_H_

#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::getline;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;

#include <cstdlib>
using std::atoi;

void getLinhasEColunas(int* lin, int* col, ifstream* entrada);

/**
* @fn 		void cleanArchive(string nameArchive)
* @brief 	Função para limpar o arquivo de saída
* @param 	string nameArchive Nome do arquivo de saída
* @return 	A função não irá retornar nada.
*/
void cleanArchive(string nameArchive);


template <typename T>
T** alocarMatriz(int *lin, int *col){
	T **matriz = new T*[*lin]; 
	for(int i = 0; i < *lin; i++){
		matriz[i] = new T[*col];
	}
	return matriz;
}

template <typename T>
void imprimirMatriz(T** matriz, int *lin, int *col){
	for(int i=0; i<*lin; i++){
		cout << "| ";
		for(int j = 0; j <*col; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "|" << endl;
	}
}

/** 
* @fn 		int **loadata(string nameArchive, int n, T **matriz)
* @brief 	Funcao que carrega as matrizes do arquivo 
* @param 	string 		nameArchive 	Nome do arquivo de saída
* @param 	int 		n 				Dimensao da matriz (nxn)
* @param 	T 			matriz 			Nome da matriz que irá receber os valores do arquivo de  entrada
* @return 	0;
**/ 
template <typename T>
T** loadData(string nameArchive, int *lin, int *col){
	T** matriz;
	ifstream entrada(nameArchive.c_str());

	if(!entrada){
		cout << "Arquivo invalido! Encerrando a execucao!" << endl;
		exit(1);
	}else{
		getLinhasEColunas(lin, col, &entrada);

		matriz = alocarMatriz<T>(lin, col);
		
		for(int i=0; i<*lin; i++){
			for(int j=0; j<*col; j++){
				entrada >> matriz[i][j];
			}
		}
		entrada.close();
	}

	return matriz;
}
#endif