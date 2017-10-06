#include<stdio.h>

int main()
{
	int *p, *s, *t;
	int a, b, soma; 
	printf("Insira dois numeros de sua escolha: ");
	scanf("%i%i", &a, &b);
	soma=a+b;
	p=&a;
	s=&b;
	t=&soma;
	printf("\n%i esta armazenado em 0x%p.\n%i esta armazenado em 0x%p.\nA soma, %i, esta armazenada em 0x%p.", a, p, b, s, soma, t);
}
