#include <stdio.h>
#include <stdlib.h>

/* Plataforma de Contabilização de Casos do Coronavirus Diário Sudeste (ES, SP, RJ, MG)*/

#define TAM 4

void menu(){
	printf("> --------------------------------MENU---------------------------\n");
	printf("1 - Contabilizar casos de hoje coronavirus no sudeste\n");
	printf("2 - Imprimir casos de hoje coronavirus no sudeste\n");
	printf("0 - Sair\n");
	printf("> Opcao:\n");
}

void contabilizaCoronavirus(int casos[]){
	int i;
	for(i = 0; i < TAM; i++){
		casos[i] = rand() % 100;
	}
}

void imprimeCoronavirus(int casos[]){
	int i;
	for(i = 0; i < TAM; i++){
		printf("%i\n", casos[i]);
	}
}

int main(int argc, char *argv[]) {
	
	int casos[4];
	int op;
	
	do{
		menu();
		scanf("%i",&op);
		switch(op){
			case 1:
				contabilizaCoronavirus(casos);	
				break;
			case 2:
				imprimeCoronavirus(casos);
				break;
		}	
	}while(op);
	return 0;
}
