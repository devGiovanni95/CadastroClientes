#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char vetor[4];
	int valor;

	//definindo ponteiro para abrir um arquivo
	FILE *arquivo;


	//Abrir arquivo
	//primeira aspa local do arquivo
	//modo abertura do arquivo
	//wt = escrita
	//rt = leitura
	//a = append
	//usando o wt se nao existir esse arquivo ele vai criar um novo com o nome definido
	arquivo = fopen("teste.txt", "wt");
	
	//se houver algum erro, o ponteiro apontará para null
	if (arquivo == NULL) {
		printf("Não foi possivel abrir o arquivo");
		exit(0);

	}
	
	//escreve dados no arquivo de txt
	fprintf(arquivo,"Ola 123");

//Fecha o arquivo
	fclose(arquivo);
	
	
	//Abrindo o arquivo em modo leitura
	arquivo = fopen("teste.txt", "rt");
	
	//se houver algum erro, o ponteiro apontará para null
	if (arquivo == NULL) {
		printf("Não foi possivel abrir o arquivo");
		exit(0);
	}
	
	fscanf(arquivo,"%s %d",&vetor,&valor);
	printf("\n\n%s \n\n%d",vetor,valor);
	

	system("pause");
	return 0;
}
