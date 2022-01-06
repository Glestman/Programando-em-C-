#include<iostream>
#include <windows.h>
#include <chrono>
#include <thread>
#include "Caixa_Eletrônico.h"
using namespace std;
int main(void)
{
	int cartao = 0, senha = 0, vsaque = 0, opcao, cod_barras,confirmar = 0;

	cout << "Bem vindo ao Banco Minas S.A\n";
	cout << "Selecione a opção desejada";
		cout << " 01 - Pagamentos";
	cout << " 02 - Depositos ";
	cout << " 03 - Transferência";
	cout << " 04 - Desbloqueio de dispositivos";
	cout << "05 - Saque ";

	cin >> opcao;

		switch (opcao) {
		case 1: {

			cout << "Posicione o codigo de barras no respectivo campo ";
				Sleep(8000);

				cout << "Não foi detectado o código, favor digitar o codigo de barras";
				cin >> cod_barras;

				cout << "O codigo digitado 'foi " << cod_barras << "\n ?";
				cin >> confirmar;

			if (confirmar == 'sim')
				cout << "Pagamento efetuado com sucesso";
		}

			  /*cout << "Informe o numero do cartao";
			  cin>>cartao;
			  cout<<"Informe sua senha";
			  cin>>senha;
			  cout < "cls";



			  cout<<"Digite o valor de saque";
			  cin>>vsaque;
			  */

		}
}