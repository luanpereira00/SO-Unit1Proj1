#include "Archive.h"

void getLinhasEColunas(int* lin, int* col, ifstream* entrada){
	string aux;
	
	getline(*entrada, aux, ' ');
	*lin = atoi(aux.c_str());
	
	getline(*entrada, aux);
	*col = atoi(aux.c_str());
}