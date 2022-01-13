#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{

	int quant=0;
	float nota=0, media = 0.0, mediag = 0.0;

	system("clear");

	cout << "Quantos alunos deseja testar? ";
	cin >> quant;

	for (int i = 1; i <= quant; ++i)
	{

		cout << endl << "----- Aluno " << i << " -----" << endl;

		for (int n = 1; n <= 3; ++n)
		{

			cout << "Insira a nota " << n << ": ";
			cin >> nota;

			media += nota;

		}

		media = media / 3;
		mediag += media;

		if (media >= 7)
			cout << "Aluno " << i << " aprovado!" << endl;
		else if (media >= 5)
			cout << "Aluno " << i << " de recuperacao!" << endl;
		else
			cout << "Aluno " << i << " reprovado !" << endl;

	}

	cout << endl << "A média é " << mediag / quant << "." << endl;

}
    