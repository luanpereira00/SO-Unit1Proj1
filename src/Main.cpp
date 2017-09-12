/**
 * @file 	main.cpp
 * @brief   Arquivo com a função pricaipal para fazer os calculos referentes à avaliação 
 * 			empíricas dos algorítmos de multiplicação de matrizes usando processos e 
 * 			normalmente
 * 			
 * @author 	Shirley Ohara (shirleyohara@ufrn.edu.br)
 * @author 	Joaliton Luan (luanpereira00@outlook.com)
 * @since  	09/09/2017
 * @date   	12/09/2017
 * @sa 	   	Calculus.h
 */

#include <iostream>
using std::cout;
using std::endl;

//Para comunicacao entre processos
#include <unistd.h>

#include <cstdlib>

#include "Calculus.h"

int main (int argc, char * argv[]){
	srand(time(NULL));
	outArchives("A"); // chama para criar as matrizes
	outArchives("B"); // chama para criar as matrizes
	analiseEmpirica();

/*
	int *mC;
	key_t key = 10;
	
	mC = sharedMem<int>(10, key);


	//Teste de fork, processos e memoria compartilhada
	cout << "Sou o pai com o pid " << getpid() << ", se eu morrer os outros morrem\n" ;
	int originalProcess = getpid();
	fork();
	cout << "Sou o processo de pid " << getpid() << endl;

	if(getpid()==originalProcess){
		//cout << "Teste SHM: ";
		for (int i=0; i<10; i++){
			mC[i]=0;
			
		}
	//cout << endl;
	}
	else {
		sleep(2);
		cout << "SharedMem = [ ";
		for (int i=0; i<10; i++){
			cout << mC[i] << " ";
		}
		cout << "]"<< endl;
		return 0;
	}
	
	sleep(3);
	*/
	// System("ipcrm -m <num>");
	// shmctl(key, IPC_RMID, NULL);
	// shmctl(50, IPC_RMID, NULL);
	
	
	return 0;
}

/*TODO
- Ler duas matrizes pela linha de comando (Try/Cathc too)
- Ler duas matrizes por leitura de arquivo
- Ver checagem do tamanho das matrizes para a multiplicação (Try/catch too)
- Criar função para multiplicar matrizes usando processos
- Criar memoria compartilhada para armazenar as matrizes
- Criar função para imprimir na tela ou no arquivo
- Criar menu de interação? (y)
*/ 