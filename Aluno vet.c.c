/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define TAMANHO10;
#include <stdio.h>
#define SALADEAULA 2

 float calculamedia( float N1, float N2)
{
    float md;
    md = (N1 + N2)/2;
    return (md);
}


int main() {
    
    struct estruturaAluno{
             int matricula;
             float N1;
             float N2;
             float media;
    };
    struct estruturaAluno aluno[SALADEAULA];
    float salaMedia = 0;
    
    // Entrada de DADOS
        for(int i = 0;i<SALADEAULA;i++){
       printf( "||||||||||||||||||||DADOS DO ALUNO||||||||||||||||||| \n\n");
       printf( "Matrícula do aluno: ");
       scanf ("%d" ,&aluno[i].matricula);
       printf( "Nota N1: ");
       scanf ("%f", &aluno[i].N1);
       printf( "Nota N2: ");
       scanf ("%f", &aluno[i].N2);
       aluno[i].media = calculamedia(aluno[i].N1,aluno[i].N2);
       salaMedia += aluno[i].media;
       
        }
    // Processamento
    
        salaMedia = salaMedia/SALADEAULA;

    // Saída - Impressão do Boletim do Aluno
        for(int i = 0; i < SALADEAULA;i++){
        printf( "\nBOLETIM DO ALUNO %d \n",aluno[i]);
        printf( "\nNota N1: %.1f", aluno[i].N1);
        printf( "\nNota N2: %.1f", aluno[i].N2);
        printf( "\nMedia..: %.1f", aluno[i].media);
        }
        printf("\nMedia da sala: %f", salaMedia);
       return (0);
}