#include <iostream>

using namespace std;
int main ()
{
	int a;
	int b;
	
	cout << " Masukan Bilangan Ganjil : ";
	cin >> a;
	
	cout << " Masukan Bilangan Genap : ";
	cin >> b;
	
	if( a %2 !=0 && b %2 == 0)
	{
		cout << "Benar, " << a << " Bilangan Ganjil Dan " << b << " Bilangan Genap " endl;
	} else if ( a % 2 == 0 && b % 2 !=0)
	{
		cout << " Maaf, " << a << " Bilangan Genap Dan " << b << " BIlangan Ganjil " endl;
	} else if ( a % 2 == 0)
	{
		cout << " Maaf, " << a << " Bilangan Genap ";
	} else if ( b % 2 != 0)
	{
		cout << " Maaf, " << a << " Bilangan Ganjil";
	}
	
	return 0;
}
