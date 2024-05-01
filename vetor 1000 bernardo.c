#include <stdio.h>
#include<conio.h>
#include <stdlib.h>

#define tam      1000
#define falso       0
#define verdadeiro  1

int main (void)
{
    int vetor[tam], i, VouF=falso, guarda, final=tam;

    printf("1000 valores \n\n");
    for (i=0; i<tam; i++){
         vetor[i] = rand()%11;
    }
 // InsertioSort
    do{
        VouF = falso;
        for (i=1; i<final; i++)
        if (vetor[i] < vetor[i-1])
        {
            guarda = vetor[i];
            vetor[i] = vetor[i-1];
            vetor[i-1] = guarda;
            VouF = verdadeiro;

        }
    }while(VouF);
    printf("metodo insercao\n");
    for (i=0; i<tam; i++) printf("%d\n", vetor[i]);
    //fim insertion
return(0);
}
