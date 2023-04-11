/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short a,b,c;
    
    printf("Informe o valor de a: ");
    scanf("%hd", & a);
    printf("Informe o valor de b: ");
    scanf("%hd", & b);
    printf("Informe o valor de c: ");
    scanf("%hd", & c);
    
    if (a > b && a > c){
        printf("O maior número é o A = %hd", a);
    }
    else if(b > a && b > c){
        printf("O maior número é o B = %hd", b);
    }
    else{
        printf("O maior número é o C = %hd", c);
    }
}
