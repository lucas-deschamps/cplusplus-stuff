#include <iostream>
using namespace std;

int main()
{
cout << "Numero da maquina: \n";
int numeroMaquina = 53;
int numeroUsuario;
cin >> numeroUsuario;

if (numeroMaquina == numeroUsuario)
{
 cout << "Numero correto";
}
else if (numeroUsuario < numeroMaquina)
{
 cout << "Incorreto. O numero da maquina e maior.";
}
else if (numeroUsuario > numeroMaquina)
{
 cout << "Incorreto. O numero da maquina e menor.";
}
}
