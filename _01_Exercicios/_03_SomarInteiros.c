// Pe�a para o usu�rio digitar tr�s valores inteiros e imprimir a soma deles.

#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");

	int a, b, c;


	printf("Digite primeiro n�mero: ");
	scanf("%d", &a);
	printf("Digite segundo n�mero: ");
	scanf("%d", &b);
	printf("Digite terceiro n�mero: ");
	scanf("%d", &c);

	printf(" ");

	printf("\nA soma dos n�meros �: %d \n", (a + b + c));

	system("pause");

	return 0;
}
