/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main (){
    int a,b;
    printf ("Digite um numero ");
    scanf ("%d",&a);
    printf("Digite um numero ");
    scanf ("%d",&b);

    if (a>b){
    a=a-b;
    printf ("A diferenca dos numeros digitados: %d",a);
    }

    else {
    a=b-a;
    printf("A diferenca dos numeros digitados: %d",a);

    }




return (0);
}
