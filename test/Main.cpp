#include <iostream>
using std::cout;
using std::endl;

#include "Archive.h"

int main (int argc, char * argv[]){
	cout << "Ola, estou de volta a essa lingua maravilhosa!" << endl;

	int *lin = new int[1], *col = new int[1];

	int **matriz = loadData<int>("../data/input/A2x2.txt", lin, col);

	imprimirMatriz(matriz, lin, col);
	return 0;
}

/*TODO
- POO ou PEP?
- Ler duas matrizes pela linha de comando (Try/Cathc too)
- Ler duas matrizes por leitura de arquivo
- Ver checagem do tamanho das matrizes para a multiplicação (Try/catch too)
- Criar função para multiplicar matrizes usando processos
- Criar memoria compartilhada para armazenar as matrizes
- Criar função para imprimir na tela ou no arquivo
- Criar menu de interação? (y)
*/ 