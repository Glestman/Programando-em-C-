#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(void)
{
	int num;
	cout << "Bem Vindo \n\n";
	cout << "Digite um numero de 1 a 7: ";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "\nDomingo\n";
		break;
	case 2:
		cout << "\nSegunda\n";
		break;
	case 3:
		cout << "\nTerca\n";
		break;
	case 4:
		cout << "\nQuarta\n";
		break;
	case 5:
		cout << "\nQuinta\n";
		break;
	case 6:
		cout << "\nSexta\n";
		break;
	case 7:
		cout << "\nSabado\n";
		break;
	default:
		cout << "\n  Excedeu numero de tentativas\n";
	}
}
