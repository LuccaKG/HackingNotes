#include <stdio.h>
#include <stdlib.h>

int LidarErro(void);
int main(int argc, char* argv[]) {
    char bof[10];
    int* p = 0x00000000;
    __try {
        gets(bof);
        *p = 19;
    }
    __except (LidarErro()) {
        printf("Estou dentro do meu exception!\n");
    }
}

int LidarErro(void) {
    printf("Estou dentro da funcao LidarErro!\n");
    return 15;
}
