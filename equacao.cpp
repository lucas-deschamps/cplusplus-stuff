#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a, b, c, delta, r1, r2;
cin >> a;
cout << "a: ";
cout << a << endl;

cout << '\n';

cin >> b;
cout << "b: ";
cout << b << endl;

cout << '\n';

cin >> c;
cout << "c: ";
cout << c << endl;

if (a == 0)
 {
  cout << "\nNao eh uma equacao de segundo grau.";
 }

else if (a != 0)
 {
	delta = pow(b, 2) - 4 * a * c;
	cout << endl << "Delta: " << delta << endl;
	
	if (delta < 0)
	{
		cout << "\nNao existem raizes reais!";
	}
	
	else
	{
		r1 = (-b + sqrt(delta)) / (2 * a);
		r2 = (-b - sqrt(delta)) / (2 * a);
		
		cout << "\nRaizes." << "\nR1: " << r1 << "\nR2: " << r2;
	}
 }
}
