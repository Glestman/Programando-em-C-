#include<iostream>
#include<string>
using namespace std;
int main(void)
{
    float altura, pesoideal;
    string sexo;
    cout << "Qual o seu sexo ?";
    cin >> sexo;
    cout << "Qual a sua altura?";
    cin >> altura;
    if (sexo == "m" || sexo == "M" || sexo == "masculino" || sexo == "Masculino")
    {
        pesoideal = (72.7 * altura) - 58;
        cout << "Seu peso ideal é: " << pesoideal << "Kg" << endl;
    }
    else
    {
        pesoideal = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal é: " << pesoideal << "Kg" << endl;
    }
}
