#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


//colocamos como file* pois é esperado um retorno do tipo txt
//definimos tambem o modo que é leitura gravação append
//e o caminho ate o arquivo
FILE* AbreArquivo(char modo, char caminho[30]){
	FILE *arquivo;
	switch(modo){
		case 'g':
			arquivo = fopen(caminho,"wt");
			break;
		case 'l':
			arquivo = fopen(caminho,"rt");
			break;
		case 'a':
			arquivo = fopen(caminho,"a");
			break;
	}
	//se houver algum erro, o ponteiro apontará para null
	if(arquivo==NULL){
		printf("Não foi possivel abrir o caminho");
		exit(0);
	}
	return arquivo;
	
}

//funcao com parametro indicativo do tipo de arquivo
void FecharArquivo(FILE *arquivo){
	//fechar o arquivo.txt
	fclose(arquivo);
}

int main() {
	char vetor[6];
	int valor;

	//definindo ponteiro para abrir um arquivo
	FILE *arquivo;


	//Abrir arquivo
	arquivo = AbreArquivo('g', "teste.txt");

	
	//escreve dados no arquivo de txt
	fprintf(arquivo,"teste 78965");

	//Fecha o arquivo
	FecharArquivo(arquivo);
	
	
	//Abrindo o arquivo em modo leitura
	arquivo = AbreArquivo('l', "teste.txt");
	
	fscanf(arquivo,"%s %d",&vetor,&valor);
	printf("\n\n%s %d\n\n",vetor,valor);
	
	//Fecha o arquivo
	FecharArquivo(arquivo);
	
	system("pause");
	return 0;
}
