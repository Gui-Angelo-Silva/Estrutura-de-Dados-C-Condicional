/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float altura, peso = 0.0;
    char sexo;
    
    printf("Informe M para masculino e F para feminino: ");
    scanf("%c", & sexo);
    printf("Informe a sua altura: ");
    scanf("%f", & altura);
    
    if(sexo == 'M'){
        peso = ((72.7 * altura) - 58);
        printf("O seu peso ideal é: %3.f", peso);
    }
    else if(sexo == 'F'){
        peso = ((62.1 * altura) - 44.7);
        printf("O seu peso ideal é: %.3f", peso);
    }
    else{
        printf("Erro!");
    }
}
