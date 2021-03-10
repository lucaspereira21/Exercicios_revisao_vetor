#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
   int vetorUm[3] = {1, 2, 3,};
   int vetorDois[3];
   int vetorSoma[3];

   cout << vetorUm [0] << " " << vetorUm [1] << " " << vetorUm[2] << endl;



   srand(time(NULL));

   for(int i = 0; i < 3; i++){
       vetorDois[i] = (rand() % 6) + 1;
       cout << vetorDois[1] << " ";
   }
   cout << endl;

   for(int i = 0; i < 3; i++){
       vetorSoma[i] = vetorUm[i] + vetorDois[i];
   }
   for(int i = 0; i < 3; i++){
      cout << vetorSoma[i] << endl;
   }

}
