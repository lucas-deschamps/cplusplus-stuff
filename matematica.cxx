#include <iostream>
using namespace std;

int main()
{
int primeiroNumero;
int segundoNumero;

cout << "Digite dois numeros: " << endl;
cin >> primeiroNumero;
cin >> segundoNumero;

int soma = primeiroNumero + segundoNumero;
int sub = primeiroNumero - segundoNumero;
int mult = primeiroNumero * segundoNumero;
int div = primeiroNumero / segundoNumero;

cout << "Soma, subtracao, multiplicacao, divisao: " << endl;
cout << soma << endl;
cout << sub << endl;
cout << mult << endl;
cout << div << endl;
}
