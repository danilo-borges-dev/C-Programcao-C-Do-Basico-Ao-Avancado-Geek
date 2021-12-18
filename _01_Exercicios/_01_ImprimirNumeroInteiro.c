#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	int number;
	printf("Informe um número inteiro: ");
	scanf("%d", &number);

	printf(" ");

	printf("\nNúmero: %d", number, "\n");
	return 0;
}
