/*
 Desenvolva um programa que solicita e armazena em um vetor 5 n�meros do tipo float.
 Em um segundo vetor dever� ser armazenado o quadrado dos n�meros para cada uma das
 posi��es indicadas no vetor anterior. Ao solicitar os valores, o programa deve
 mostrar ao usu�rio em qual posi��o ser� armazenado o valor fornecido. Al�m disso,
 ap�s fornecido todos os n�meros, seu programa deve mostrar para cada uma das posi��es
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
       cout << "Digite o valor a ser armazenado na posi��o: " << 1 << " do vetor A:";
       cin >> vetorA[i];

   vetorB[i] = vetorA[i] * vetorA[i];

   }
   for(int i = 0; i < 5; i++){
        cout << "O valor armazenado no vetor A �: " << vetorA[i] << " e o quadrado desse valora armazenado no vetor B � " << vetorB[i] << " ambos na posi��o " << i << endl;






   }
}
