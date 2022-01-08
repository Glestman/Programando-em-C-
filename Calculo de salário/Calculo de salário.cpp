#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	string  condicao;
	float valor=0, hora, soma=0, inss, condicao1, condicao2, valormes, gasto_mes;
	cout << "Voce trabalha?";
	cin >> condicao;
	if (condicao == "sim")
	{
		cout << "Quanto voce receber por hora? \n";
		cin >> valor;
		cout << "Quantas horas por dia voce trabalha: ";
		cin >> hora;
		cout << "Qual o valor do seu convenio: ";
		cin >> condicao1;
		cout << "Qual o valor do seu vale transporte: ";
		cin >> condicao2;
		soma = valor * hora;
		valormes = soma * 30;
		gasto_mes = condicao1 + condicao2;
		inss = soma * (5 / 100);
		soma = (valormes - gasto_mes) - inss;
		cout << "Seu salario liquido e :" << soma << endl;
	}
	else
		cout << "Va procura um emprego cara "<< endl;
	system("pause");
}

