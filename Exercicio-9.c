/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ano, mes, dia, resultado;
    
    printf("Informe sua idade em anos, meses e dias: ");
    scanf("%d %d %d", & ano, & mes, & dia);
    
    printf("A sua idade expressa em dias é: %d", resultado = (ano * 365) + (mes * 30) + dia);
}
