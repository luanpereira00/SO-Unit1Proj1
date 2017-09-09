#ifndef _ARCHIVE_H_
#define _ARCHIVE_H_

#include <iostream>
using std::endl;
using std::cout;
using std::getline;

#include <fstream>
using std::ifstream;


/** 
* @fn 		int **loadata(string nameArchive, int n, T **matriz)
* @brief 	Funcao que carrega as matrizes do arquivo 
* @param 	string 		nameArchive 	Nome do arquivo de saída
* @param 	int 		n 				Dimensao da matriz (nxn)
* @param 	T 			matriz 			Nome da matriz que irá receber os valores do arquivo de  entrada
* @return 	0;
**/ 
template <typename T>
int **loadata(string nameArchive, int n, T **matriz){
	string aux;
	ifstream entrada(nameArchive.c_str());

	if(!entrada){
		cout << "Arquivo inválido" << endl;
		exit(1);
	}else{
		getline(entrada, aux);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				entrada >> aux;
				matriz[i][j] = atoi(aux.c_str());
			}
		}
		while(!entrada.eof()){
			getline(entrada, aux);
		}

		entrada.close();
	}
	return 0;
}

#endif