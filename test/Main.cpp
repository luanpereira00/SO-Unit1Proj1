#include <iostream>
using std::cout;
using std::endl;

#include "Archive.h"

int main (int argc, char * argv[]){
	cout << "Ola, estou de volta a essa lingua maravilhosa!" << endl;

	int *lin = new int[1], *col = new int[1];

	int **matrizA = loadData<int>("../data/input/A4x4.txt", lin, col);
	int **matrizB = loadData<int>("../data/input/B4x4.txt", lin, col);

	cout << "Matriz A = " << endl;
	imprimirMatriz(matrizA, lin, col);
	cout << endl;
	
	cout << "Matriz B = " << endl;
	imprimirMatriz(matrizB, lin, col);
	cout << endl;

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