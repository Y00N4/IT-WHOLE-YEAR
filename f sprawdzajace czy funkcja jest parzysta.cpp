//funckja sprawdzajca czy f jest parzysta, jezeli jest to ma podzielic ja na dwa. ma zwrocic resultat. (nie void)
#include <iostream>
using namespace std;


bool czyParzyste(int liczba){
	 if (liczba%2==0){

	 //cout << liczba%2<< endl; 
	 	return true;
	 }
	 else {
	 	return false; 	 
	}
} 
int dzielenie(int liczba){
	liczba/=2;
}
int main(){
	int liczba;
	 cout << "podaj liczbe: ";
	 cin >> liczba;	
	if (czyParzyste(liczba)==true) {
		cout << dzielenie(liczba);
	}
}
//
