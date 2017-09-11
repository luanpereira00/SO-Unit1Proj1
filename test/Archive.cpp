#include <fstream>
using std::ofstream;

#include "Archive.h"

void getLinhasEColunas(int* lin, int* col, ifstream* entrada){
	string aux;
	
	getline(*entrada, aux, ' ');
	*lin = atoi(aux.c_str());
	
	getline(*entrada, aux);
	*col = atoi(aux.c_str());
}

/**
* @fn 		void cleanArchive(string nameArchive)
* @brief 	Função para limpar o arquivo de saída
* @param 	string nameArchive Nome do arquivo de saída
* @return 	A função não irá retornar nada.
*/
void cleanArchive(string nameArchive){
	ofstream myFile;
	myFile.open(nameArchive.c_str());
	myFile.clear();
	myFile.close();
}