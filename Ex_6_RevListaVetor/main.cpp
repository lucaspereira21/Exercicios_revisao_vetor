/*
6-) Desenvolva um programa que armazena 10 n�meros inteiros aleat�rios entre 1 e 10 em um estrutura
de vetor. Al�m de mostrar os 10 n�meros armazenados no vetor, seu programa deve mostrar tamb�m
a quantidade de cada um dos n�meros entre 1 a 10 armazenados.
*/


#include <iostream>
#include <time.h>
#include <cstdlib>
#include <locale>

using namespace std;

int main()
{
   int vetorAleatorio[10];
   int vetorQuantidade = 0;

   setlocale(LC_ALL, "portuguese");

   srand(time(NULL));

   for(int i = 0; i < 10; i++){
       vetorAleatorio[i] = rand() % 10 + 1;
      cout << vetorAleatorio[i] << " ";

   }
   cout << endl;

   for(int i = 0; i < 10; i++){

        if(vetorAleatorio[i] == vetorAleatorio[0]){
        vetorQuantidade++;
        cout << " � igual: " << vetorAleatorio[0]<< endl;

}
}
        if(vetorAleatorio[i] == vetorAleatorio[1]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[1]<< endl;
}
        if(vetorAleatorio[i] == vetorAleatorio[2]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[2]<< endl;
}
        if(vetorAleatorio[i] == vetorAleatorio[3]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[3]<< endl;
}
        if(vetorAleatorio[i] == vetorAleatorio[4]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[4]<< endl;
}
        if(vetorAleatorio[i] == vetorAleatorio[5]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[5]<< endl;
}
        if(vetorAleatorio[i] == vetorAleatorio[6]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[6]<< endl;
}
       if(vetorAleatorio[i] == vetorAleatorio[7]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[7]<< endl;
}
       if(vetorAleatorio[i] == vetorAleatorio[8]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[8]<< endl;
}
       if(vetorAleatorio[i] == vetorAleatorio[9]){
        vetorQuantidade++;
         cout << " � igual: " << vetorAleatorio[9]<< endl;
}



        }

}

