/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


    int fibonacci (int x) {
        int first = 1, second = 1, aux = 1 ;
        for(int i = 3; i <= x; i++){
            
            aux = first + second;
            first = second;
            second = aux;
        }
        return aux;
    }
    int main(){
        int vsco, final;
        scanf("%d", &vsco);
        final = fibonacci(vsco);
        printf ("%d", final);
    }

