#include <iostream>
#include <cmath>
using namespace std;

int main()
{
bool GG = false;
int a, quadrado;
cin >> a;
cout << "a: ";
cout << a << endl;

cout << '\n';

quadrado = pow(a,2);
cout << "Quadrado: " << quadrado;

if (a > 2)
{
	cout << "\nA é maior que dois.";
	GG = true;

	if (GG == true)
	{
		cout << "\nGG é true.";
	}

}
}
