#include <iostream>
using namespace std;

// uzytkownik wprowadza date urodzenia: dzien, miesiac, rok urodzenia. tworzymy zmienne a b c  i na podstawie tych wszystkich 
//danych musimy zobaczyc czy uzytkowik jest pe³noletni.
 
 

 
 int main (){
 	
 	int dzien, miesiac, rok;
 	cout  << "Podaj dzien urodzenia: " << flush;
 	cin >> dzien;
 	cout << "Podaj miesiac urodzenia: " << flush;
 	cin >> miesiac;
 	cout << "Podaj rok urodzenia: " << flush;
 	cin >> rok;
 	
 	if ( rok < 2004 ) {
 		cout << "pelnoletni"; }
 	else if ( rok == 2004 && miesiac <= 9) {
	  cout << "pelnoletni: "; }
	  else if (rok  == 2004 && miesiac <=9 &&dzien <=20){
	  	cout << "pelnoletni";
	  }
	  else 
	  	cout << "niepelnoletni";
	  
 return 0;	
 }
