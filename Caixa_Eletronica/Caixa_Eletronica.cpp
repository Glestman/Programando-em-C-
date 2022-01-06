#include<iostream>
#include <windows.h>
#include <chrono>
#include <thread>

using namespace std;
int main(void)
{
	int cartao = 0, senha, vsaque = 0, opcao, cod_barras, confirmar = 0, conta, agencia, depositar;

	cout << "Bem vindo ao Banco Minas S.A\n";
	cout << "Selecione a opção desejada\n";
	cout << " 01 - Pagamentos\n";
	cout << " 02 - Depositos \n";
	cout << " 03 - Transferência\n";
	cout << " 04 - Desbloqueio de dispositivos\n";
	cout << "05 - Saque \n";

	cin >> opcao;

	switch (opcao) {
	case 1: {

		cout << "Posicione o codigo de barras no respectivo campo \n";
		Sleep(8000);

		cout << "Não foi detectado o código, favor digitar o codigo de barras\n";
		cin >> cod_barras;

		cout << "O codigo digitado 'foi " << cod_barras << "\n ?";
		cin >> confirmar;

		if (confirmar == 'sim')
			cout << "Pagamento efetuado com sucesso\n";

		else(confirmar == 'nao');
		return (opcao);
	}
	case 2: {
		cout << "Digite a conta : \n";
		cin >> conta;

		cout << "Digite a Agência: \n";
		cin >> agencia;

		cout << "Informe o valor que será depositado: \n";
		cin >> depositar;

		cout << "O valor de " << depositar << " foi depositado com sucesso! ";

		return (opcao);

	}
	case 3: {
		cout << "Informe os dados do favorecido\n";
		cout << "Informe a agencia do favorecido: \n";
		cin >> agencia;

		cout << "Informe a conta : \n";
		cin >> conta;
		cout << "Informe o valor que será transferido: \n";
		cin >> depositar;
		cout << "O valor de " << depositar << " foi transferido com sucesso! ";

		return (opcao);

	}
	case 4: {
		string desbloqueado;

		cout << "Foi detectado o dispositivo RXM55\n";
		cout << "Desbloquea-lo ?\n";
		cin >> desbloqueado;

		if (desbloqueado == "S" || desbloqueado == "s") {
			cout << "Dispositivo desbloqueado com sucesso ";
		}
		else if(desbloqueado != "S" || desbloqueado != "s") {
			return opcao;
		}


	}
	case 5: {
		
		cout << "Informe o numero da agencia\n";
		cin >> agencia;
		cout << "Informe o numero da conta: \n";
		cin >> conta;
		cout << "cls";

		cout << "Informe a senha do cartao: \n";
		cin >> senha;

		cout << "Informe o valor que gostaria de sacar: ";
		cin >> vsaque;
		cout << "O valor de " << vsaque << " foi sacado com sucesso ";


	}
}


}
