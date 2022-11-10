/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void){
    int vet[5];
    int i;
    for(i = 0; i < 5; i++){
        printf("\nDigite o numero\n:");
        scanf("%d", &vet[i]);
    }
    int maior = vet[0];
    int posmaior = 0;
    printf("\nO vetor e: %d", vet [0]);
    for (i = 1; i < 5; i++){
        printf ("%d", vet[i]);
        if (vet[i > maior]){
            maior - vet[i];
            posmaior = i;
        }
    }
    printf("\nO maior valor e %d, localizado na posição %d (indfice %d).\n", maior, posmaior+1, posmaior);
    system ("pause");
    return 0;
}

