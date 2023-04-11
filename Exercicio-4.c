/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    short cod, qtd;
    float preco;
    
    printf("Informe o código do item pedido: ");
    scanf("%hd", & cod);
    
    if(cod == 100 || cod == 105){
        printf("Informe a quantidade do produto: ");
        scanf("%hd", & qtd);
        
        if(cod == 100 || cod == 103){
            preco = qtd * 1.2;
        }
        else if(cod == 101 || cod == 104){
            preco = qtd * 1.3;
        }
        else if(cod == 102){
            preco = qtd * 1.5;
        }
        else if(cod == 105){
            preco = qtd * 1.0;
        }
        printf("Total a pagar: R$ %.2f", preco);
    }
    else{
        printf("Código informado não existe!");
    }
}