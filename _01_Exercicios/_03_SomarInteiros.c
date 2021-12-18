// Peça para o usuário digitar três valores inteiros e imprimir a soma deles.

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, c;


	printf("Digite primeiro número: ");
	scanf("%d", &a);
	printf("Digite segundo número: ");
	scanf("%d", &b);
	printf("Digite terceiro número: ");
	scanf("%d", &c);

	printf(" ");

	printf("\nA soma dos números é: %d \n", (a + b + c));

	system("pause");

	return 0;
}
