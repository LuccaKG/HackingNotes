#include <stdio.h>
#include <string.h>

void inverteFrase(char *ptrFrase){
    char *i;
    for (i = ptrFrase + strlen(ptrFrase) - 1; i >= ptrFrase; i--){
        printf("%c", *i);
    }
}

int main(){
    char str[100];
    printf("Digite a frase a ser invertida (max. 100 caract.):\n");
    fgets(str, 101, stdin); // 101 pois na fgets o ultimo caractere é substituido por \0
    printf("Frase original: %s\n", str);
    printf("Frase invertida: ");
    inverteFrase(str);

    return 0;
    }
