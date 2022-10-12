#include <stdio.h>


int main(){

	int n;
	int* p;
	int head = NULL;
	int i, num, vet[10];

	for (i =0 ; i < 10; i++)
	{
		printf_s("Digite um numero: ");
		scanf_s("%d", &vet[i]);
	}
	for (i = 0; i < 10; i++)
	{
		printf_s("O numero digitado foi %d \n", vet[i]);
	}
	


	printf_s("Digite um numero: ");
	scanf_s("%d", &n);

	p = &n;
	
	


	printf_s("O numero informado foi : %d \n", n);
	printf_s("Endereco de memoria : %d \n", &n);
	printf_s("O Endereco do ponteiro e: %p\n", p);

	p* head;
	

	printf_s("O valor de p e: %d \n", *p);










	return 0;
}