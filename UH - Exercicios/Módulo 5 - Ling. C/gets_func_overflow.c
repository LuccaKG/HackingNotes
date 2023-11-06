#include <stdio.h>
#include <string.h>

int pass(int a);
int main(){
    char nome[50];
    int valida = 0;
    printf("Digite algo e eu definirei seu acesso!\n");
    gets(nome);
    if (pass(valida)){
        printf("Bem vindo!\n");
    }
    else{
        printf("Va embora!\n");
    }
}

int pass(int a){
    return a;
}
