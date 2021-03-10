/*
1-) Desenvolva um programa que solicita uma palavra de até 20 caracteres, armazena essa palavra em um vetor
e mostra esse nome na vertical, ou seja, um caracter por linha. Dessa forma, supondo que foi fornecida
a palavra CIENCO, a saída do seu programa deve ser algo similar a:
C
I
E
N
C
O
*/

#include <iostream>
#include <stdio.h> // PARA USAR gets
#include <string.h> // PARA USAR strlen

using namespace std;

int main()
{
    char palavra[20];
    int numLetras = 0;

    cout << "Entre com a palavra: ";
    gets(palavra); // POIS SE USAR CIN E FOR ECREVER EXEMPLO "CASA DAS MAQUINAS" ELE SÓ IA LER CASA

    numLetras = strlen(palavra); // PARA IMPRIMIR SOMENTE O TAMANHO DA PALAVRA

    for(int i = 0; i < numLetras; i++){
        cout << palavra[i] << endl;
    }
   /* char palavra2[10];
    cout << "Entre com a palavra: ";
    fgets (palavra2, 10, stdin);            // usando fgtes e definido o tamanho, não passa do tamanho informado

    cout << palavra2 << endl;
    */



}
