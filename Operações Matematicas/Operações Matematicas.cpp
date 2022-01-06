#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main()
{
	float n1, n2, resultado;
	string simb;
	{
		cout << "Informe o primeiro numero : ";
		cin >> n1;
		cout << "Informe o segundo numero : ";
		cin >> n2;
		cout << "Digite qual operação deseja utilizar";
		cin >> simb;
		if (simb == "+") {
			resultado = n1 + n2;
			cout << " O resultado final e  " << resultado;
		}
		else if (simb == "-") {
			resultado = n1 - n2;
			cout << " O resultado final e  " << resultado;
		}
		else if (simb == "*") {
			resultado = n1 * n2;
			cout << " O resultado final e  " << resultado;
		}
		else if (simb == "/") {
			resultado = n1 / n2;
			cout << " O resultado final e  " << resultado;
		}
		
	}
}







