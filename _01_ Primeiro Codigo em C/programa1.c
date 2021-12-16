// Aula sobre Variáveis
#include <stdio.h> // A Biblioteca Stdio.h é para se trabalhar com entrada e saída dedados em C

int main()
{
	// Declarando Variáveis
	int idade = 0; // Variável do TIPO Inteiro

	// Declarando e Inicializando Variáveis
	int idade2 = 28;

	// Função para Exibir algo no Console (Saída padrão)
	printf("Mensagem\n");
	printf("Nova Mensagem\n");

	printf(" ");

	printf("Digite a nova idade: \n");
	scanf("%d", &idade);

	printf("Idade: %d", idade);
	return 0;
}
