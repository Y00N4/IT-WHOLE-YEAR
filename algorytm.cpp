//  uzytkownik podaje liczbe, a my liczby sume z jej cyfr
#include <iostream>
using namespace std;

int main (){
	int x, suma;
	cout << "Podaj liczbe: ";
	cin >> x;

	while ( x != 0)	{
	suma += x%10;
	cout << x%10  << endl;
	x = x/10;
 
}
	cout << "Suma cyfr: " << suma <<  flush;
	return 0;
}

//sprawdz czy 1 i ostatnia cyfra sa takie same
