#include <stdio.h>
int main ( )
{
 char mensagem[17] = {'V','a','m','o','s',' ','P', 'r', 'o', 'g', 'r', 'a','m', 'a','r','!' ,'\n' };
 int indice;
 for (indice=0 ; mensagem[indice] != '\n' ; indice++)
 printf("%c", mensagem[indice]);
}