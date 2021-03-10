/*
5-) Desenvolva um programa que armazena 10 números inteiros aleatórios entre 1 e 10 em um estrutura
de vetor. Além de mostrar os 10 números armazenados no vetor, seu programa deve mostrar também
quantos números são iguais, menores e maiores que o valor armazenado na primeira posição do vetor.
*/


#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
   int vetorAleatorio[10];
   int contaIgual = 0;
   int contaMenor = 0;
   int contaMaior = 0;

   srand(time(NULL));

   for(int i = 0; i < 10; i++){
       vetorAleatorio[i] = rand() % 10 + 1;
      cout << vetorAleatorio[i] << " ";

    }

    cout << endl;

    for(int i = 0; i < 10; i++){

        if(vetorAleatorio[i +1] == vetorAleatorio[0] ){
        contaIgual++;

        }
        if(vetorAleatorio[i] - vetorAleatorio[0] ){
        contaMenor++;

        }
        if(vetorAleatorio[i] + vetorAleatorio[0] ){
        contaMaior++;
        }
}
 cout << " Existem " << contaIgual << " valores iguais ao valor armazenado no indice 0 do vetor " << endl;
 cout << " Existem " << contaMenor << " valores menores que o valor armazenado no indice 0 do vetor " << endl;
 cout << " Existem " << contaMaior << " valores maiores que o valor armazenado no indice 0 do vetor " << endl;
}

