/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short idade;
    
    printf("Informe a sua idade: ");
    scanf("%hd", & idade);
    
    if(idade < 5){
        printf("Sem categoria");
    }
    else if(idade < 8){
        printf("Categoria infantil A");
    }
    else if(idade < 11){
        printf("Categoria infantil B");
    }
    else if(idade < 14){
        printf("Categoria juvenil A");
    }
    else if(idade < 18){
        printf("Categoria juvenil B");
    }
    else{
        printf("Adulto");
    }
}
