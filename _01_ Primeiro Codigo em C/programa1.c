// Aula sobre Vari�veis
#include <stdio.h> // A Biblioteca Stdio.h � para se trabalhar com entrada e sa�da dedados em C

int main()
{
	// Declarando Vari�veis
	int idade = 0; // Vari�vel do TIPO Inteiro

	// Declarando e Inicializando Vari�veis
	int idade2 = 28;

	// Fun��o para Exibir algo no Console (Sa�da padr�o)
	printf("Mensagem\n");
	printf("Nova Mensagem\n");

	printf(" ");

	printf("Digite a nova idade: \n");
	scanf("%d", &idade);

	printf("Idade: %d", idade);
	return 0;
}
