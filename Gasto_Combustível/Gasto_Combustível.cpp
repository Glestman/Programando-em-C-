#include<iostream>
#include<string>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
int main(void)
{
	float consum_medio, combust_gasto;
	int distancia;

	cout << "Qual a quantidade de combustível colocada no tanque \n : ";
	cin >> combust_gasto;

	cout << "Qual e a distancia : \n";
	cin >> distancia;

	cout << " O consumo medio do carro e : " << distancia / combust_gasto << "litros " << endl;
	consum_medio = distancia / combust_gasto;
}


