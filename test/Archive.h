#ifndef _ARCHIVE_H_
#define _ARCHIVE_H_

#include <iostream>
using std::endl;
using std::cout;
using std::getline;

#include <fstream>
using std::ifstream;

#include <string>
using std::string;


void getLinhasEColunas(int* lin, int* col, ifstream* entrada);

template <typename T>
T** alocarMatriz(int *lin, int *col){
	T **matriz = new T*[*lin]; 
	for(int i=0; i<*lin; i++){
		matriz[i] = new T[*col];
	}

	for(int i=0; i<*lin; i++){
		for(int j=0; j<*col; j++){
			matriz[i][j] = 0;
		}
	}
	return matriz;
}

template <typename T>
void imprimirMatriz(T** matriz, int *lin, int *col){
	cout << "Matriz = " << endl; 
	for(int i=0; i<*lin; i++){
		cout << "| ";
		for(int j=0; j<*col; j++){
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
		
		//imprimirMatriz(matriz, lin, col);

		/*for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				entrada >> aux;
				matriz[i][j] = atoi(aux.c_str());
			}
		}
		while(!entrada.eof()){
			getline(entrada, aux);
		}*/
		entrada.close();
	}

	return matriz;
}
#endif