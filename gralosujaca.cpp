//komputer losuje liczbe od 1 do 100. Uzytkownik musi je gadnac na podstawie podpowiedzi 

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main (){

	int lLiczba, zLiczba; 
	srand (time(NULL));
	lLiczba = rand ()% 100+1;
	
	cout << lLiczba << endl;
	
	 while (lLiczba != zLiczba){
	 	cout << "Podaj liczbe: " << flush;
		cin >> zLiczba;  
		if (lLiczba > zLiczba) {
			cout << "Liczba jest za mala ";
		}
		else if (lLiczba < zLiczba) {
			cout << "Liczba jest za duza ";
		}
		else {
			cout << "Gratulacje! :D";
		}
			
	 }
	
	
	
	return 0;
	
}
