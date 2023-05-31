// program ktory sprawdza czy liczba jest liczba pierwsza  czy dzieli sie przez 1 i sama siebie.
 
#include <iostream>
using namespace std;


int main(){
	int a;
	cin >> a;
	bool czyPierwsza= true;
	
	for(int i=3; i<a; i++) {
		if ( a%i==0) {
			czyPierwsza= false;			 			
		}
	
	}
	 cout << czyPierwsza;
}



