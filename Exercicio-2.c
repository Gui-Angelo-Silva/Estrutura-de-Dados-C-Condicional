/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short a, b;
    
    printf("Informe o valor de a: ");
    scanf("%hd", & a);
    printf("Informe o valor de b: ");
    scanf("%hd", & b);
    
    if((a % b) == 0){
        printf("%hd e %hd são multiplos!", a, b);
    }
    else{
        printf("%hd e %hd não são multiplos!", a, b);
    }
}
