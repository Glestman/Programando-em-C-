#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>

int main()
{
	int n1=0, n2=0, simb = 0, set, soma;

	printf("\n 1-soma \n ");
	printf("2-subtracao \n ");
	printf("3-divisao \n ");
	printf("3-multiplicacao \n ");
	printf("Digite o numero correspondente a opcao desejada");
	std::cin>>set;
	switch (set)
	{
	case 1: {
		printf("Digite os numeros para efetuar operacao de soma ");
		std::cin >> n1>>n2;
		soma = n1 + n2;
		printf("A soma e %d", soma);
		break;
	}

	case 2: {
		printf("Digite os numeros para efetuar operacao subtracao de  ");
		std::cin >> n1>>n2;
		soma = n1 - n2;
		printf(" A subtracao e : %d ", soma);
		break;
	}
	case 3: {
		printf("Digite os numeros para efetuar operacao divisao ");
		std::cin >> n1>>n2;
		soma = n1 / n2;
		printf("A divisao e :%d ", soma);
		break;
	}
	case 4: {
		printf("Digite os numeros para efetuar operacao multiplicação ");
		std::cin>>n1>>n2;
		soma = n1 * n2;
		printf("A multiplicacao e :%d ", soma);
		break;
	}
	}
}


