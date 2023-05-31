
//przekazujemy do funckji tablice ma przyjac ja jako parametr i zwrocic dodawanie z tych liczb
#include <iostream>
using namespace std;

long long dodawanie(long long tab[]){
//	double tab[5];
	long long suma = 0;
	
	for (int i=0; i<5;i++){
		suma+=tab[i];
		cout << "suma " << suma << endl;
		cout << tab[i] << endl;
	}
	return suma;
	
}

int  main(){ 
	long long tablica[5]= {10000000001, 10000000002,10000000003,10000000004,10000000005};
	cout << dodawanie(tablica);
//	cout << tablica[5];
}
