#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int type;
	int n1, n2;
	cout << " 1. Dodawanie  " << endl << " 2.Odjemowanie " << endl <<  "3. Dzielenie " << "4. Mnozenie " << endl << "5. Potegowanie " << endl << "Wybierz: "<< endl;
	cin >> type;
	cout << "n1: ";
		cin >> n1;
		cout << "N2: ";
		cin >> n2;
		
	if (type == 1) {
	cout << "Suma: " << n1 + n2;
	}
	 else if (type == 2) {
		cout << "Roznica: " << n1- n2;
	}
	else if (type == 3) {
		cout << "Dzielenie: " << n1 / n2;
		
	}
	else if (type == 4) {
		cout<< "Mnozenie: " << n1 * n2;
	}
	else if (type == 5) {
	cout << "Potegowanie: " << pow(n1, n2);
	}
	else 
		cout << "Wrong type";

return 0;
}
	
