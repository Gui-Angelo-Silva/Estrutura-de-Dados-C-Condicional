/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short a, b, c;
    
    printf("Informe três números inteiros: ");
    scanf("%hd %hd %hd", & a, & b, & c);
    
    if (c < a && c < b && b < a){
            printf("A ordem decrescente é %hd %hd %hd", a, b, c);//
        }
        else if (a < b && a < c && c < b){
            printf("A ordem decrescente é %hd %hd %hd", b, c, a);//
        }
        else if (a < b && a < c && b < c){
            printf("A ordem decrescente é %hd %hd %hd", c, b, a);//
        }
        else if(c < a && c < b && a < b){
            printf("A ordem decrescente é %hd %hd %hd", b, a, c);//
        }
        else if (b < a && b < c && c < b){
            printf("A ordem decrescente é %hd %hd %hd", a, c, b);//
        }
        else if (b < a && b < c && a < c){
            printf("A ordem decrescente é %hd %hd %hd", c, a, b);//
        }    
}
