/*
 Desenvolva um programa que solicita e armazena em um vetor 5 números do tipo float.
 Em um segundo vetor deverá ser armazenado o quadrado dos números para cada uma das
 posições indicadas no vetor anterior. Ao solicitar os valores, o programa deve
 mostrar ao usuário em qual posição será armazenado o valor fornecido. Além disso,
 após fornecido todos os números, seu programa deve mostrar para cada uma das posições
 o valor armazenado no vetor A e o quadrado desse valor armazenado no vetor B.

 */



#include <iostream>
#include <locale>

using namespace std;

int main()
{
   float vetorA[5];
   float vetorB[5];

   setlocale(LC_ALL, "portuguese");

   for(int i = 0; i < 5; i++){
       cout << "Digite o valor a ser armazenado na posição: " << 1 << " do vetor A:";
       cin >> vetorA[i];

   vetorB[i] = vetorA[i] * vetorA[i];

   }
   for(int i = 0; i < 5; i++){
        cout << "O valor armazenado no vetor A è: " << vetorA[i] << " e o quadrado desse valora armazenado no vetor B é " << vetorB[i] << " ambos na posição " << i << endl;






   }
}
