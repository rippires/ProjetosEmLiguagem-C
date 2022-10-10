#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

struct cadastro 
{
	int codigo;
	char nome[50];
	char telefone[30];
	char email[35];
};


int main(){
	setlocale(LC_ALL, "Portuguese");
	struct cadastro cad[5];
	int op, contador = 0, i;
	
	
	do{
		printf("Digite: \n\n");
		printf("1 - Para Inserir um novo Cadastro\n");
		printf("2 - Para Mostrar Todos Os cadastros\n");
		printf("0 - Para Encerrar\n");
		scanf ("%d", &op);
		fflush(stdin);
		
		switch (op)
		{
		
			case 1:
				if(contador<=4){
					system("cls");
					printf("NOVO CADASTRO:\n");
					printf("Código: %d\n", contador);
					printf("Digite o Nome do Cliente: \n");
					fgets(cad[contador].nome, 50, stdin);
					fflush(stdin);
				
					printf("Digite o Numero do Telefone:\n");
					fgets(cad[contador].telefone, 30, stdin);
					fflush(stdin);
					
					printf("Digite o Email: \n");
					fgets(cad[contador].email, 35, stdin);
					fflush(stdin);
					
					contador++;
					
					system("cls");
				} else {
					printf("AGENDA LOTADA!\n\n");
					system("pause");
					system("cls");
				}
			break;
			
			case 2:
				if(contador == 0){
					printf("\nAGENDA VAZIA!\n\n");
				} else {
	
						printf("CADASTROS\n");
				
						for(i=0; i<contador;i++){
						printf("Código: %d\n", i);
						printf("Nome: %s", cad[i].nome);
						printf("Telefone: %s", cad[i].telefone);
						printf("Email: %s\n", cad[i].email);
						}
				}		
				
			break;
			
			case 0: 
					printf("Programa Encerrado!\n");
					system ("pause");
					break;
			default: 
				printf("\nOpção Inválida\n");
				break;
		}
	}
	while (op != 0);
	return 0;
}





