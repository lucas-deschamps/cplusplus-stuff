#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int dia, mes, ano, resto;

cout << "Digite o dia, em numeros: ";
cin >> dia;
cout << endl;

cout << "Digite o mes, em numeros: ";
cin >> mes;
cout << endl;

cout << "Digite o ano, em numeros: ";
cin >> ano;
cout << endl;

if (mes == 2)
 {
	resto = ano%4;
	if (resto != 0)
	{
		if (dia > 0 && dia < 29)
		{
			cout << "Dia valido.";
		}
		else
		{
			cout << "Dia invalido.";
		}
	}
	else if (resto == 0)
	{
		if (dia > 0 && dia < 30)
		{
			cout << "Dia valido.";
		}
		else
		{
			cout << "Dia invalido.";
		}
	}
 }
else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
 {
	if (dia > 0 && dia < 31)
	{
		cout << "Dia valido.";
	}
	else
	{
		cout << "Dia invalido.";
	}
 }
  else
    {
	  if (dia > 0 && dia < 32)
	  {
		  cout << "Dia valido.";
	  }
	  else
	  {
		  cout << "Dia invalido.";
	  }
    }
}
