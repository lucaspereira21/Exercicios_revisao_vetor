/*
 4-) Com base na versão anterior do seu programa, faça as modificações necessárias  para que o cálculo
do valor ao quadrado utilize a função matemática pow disponibilizada pela biblioteca math.h
*/

#include <iostream>
#include <locale>
#include <math.h> // para usar o pow

using namespace std;

int main()
{
   float vetorA[5];
   float vetorB[5];

   setlocale(LC_ALL, "portuguese");

   for(int i = 0; i < 5; i++){
       cout << "Digite o valor a ser armazenado na posição: " << 1 << " do vetor A:";
       cin >> vetorA[i];

   vetorB[i] = pow(vetorA[i], 2); // quando usar pow nao pode usar int, tem que ser float, double..

   }
   for(int i = 0; i < 5; i++){
        cout << "O valor armazenado no vetor A è: " << vetorA[i] << " e o quadrado desse valora armazenado no vetor B é " << vetorB[i] << " ambos na posição " << i << endl;






   }
}
