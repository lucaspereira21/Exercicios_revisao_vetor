/*
 4-) Com base na vers�o anterior do seu programa, fa�a as modifica��es necess�rias  para que o c�lculo
do valor ao quadrado utilize a fun��o matem�tica pow disponibilizada pela biblioteca math.h
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
       cout << "Digite o valor a ser armazenado na posi��o: " << 1 << " do vetor A:";
       cin >> vetorA[i];

   vetorB[i] = pow(vetorA[i], 2); // quando usar pow nao pode usar int, tem que ser float, double..

   }
   for(int i = 0; i < 5; i++){
        cout << "O valor armazenado no vetor A �: " << vetorA[i] << " e o quadrado desse valora armazenado no vetor B � " << vetorB[i] << " ambos na posi��o " << i << endl;






   }
}
