/*

2-) Desenvolva um programa que solicita uma palavra de até 20 caracteres, armazena essa palavra em um vetor
e mostra o número de caracteres dessa palavra.
*/




#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char palavra[20];
    int numLetras = 0;

    cout << "Entre com a palavra: ";
    gets(palavra);

    numLetras = strlen(palavra);

    cout << numLetras;
    }


