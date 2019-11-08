#include <iostream>
using namespace std;

int main()
{
int primeiroNumero;
int segNumero;
int tercNumero;
cout << "Primeiro numero: \n";
cin >> primeiroNumero;
cout << "Segundo numero: \n";
cin >> segNumero;
cout << "Terceiro numero: \n";
cin >> tercNumero;

if (primeiroNumero > segNumero && primeiroNumero > tercNumero)
{
	cout << "O maior numero eh o primeiro: " << primeiroNumero;
}
else if (segNumero > primeiroNumero && segNumero > tercNumero)
{
	cout << "O maior numero eh o segundo: " << segundoNumero;
}
else if (tercNumero > primeiroNumero && tercNumero > segNumero)
{
	cout << "O maior numero eh o terceiro: " << terceiroNumero;
}
}
