/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cod, qtd;
    float preco;
    
    printf("Informe o código do produto: ");
    scanf("%d", & cod);
    printf("Informe a quantidade: ");
    scanf("%d", & qtd);
    
    if (cod == 1001 || cod == 987){
        printf("Total a pagar: R$ %g", preco = 5.32 * qtd);
    }
    else if(cod == 1324 || cod == 7623){
        printf("Total a pagar: R$ %g", preco = 6.45 * qtd);
    }
    else if(cod == 6548){
        printf("Total a pagar: R$ %g", preco = 2.37 * qtd);
    }
    else{
        printf("Produto não encontrado!");
    }
}