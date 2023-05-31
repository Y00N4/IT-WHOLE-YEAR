//10 elementów tablicy kazda liczba ma byc losowa z zakresu do 0-99. Ile znalazlo sie tam liczb nieparzystych i parzystych
//zadanie maturalne z jasiem i ma³gosia ktorzy lubia  liczby. (algorytm)
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void liczby(){
	srand(time (NULL) );
	int liczbyLosowe[10];
	int  iloscParzystych=0;
	int iloscNieparzystych=0;
	
	for (int i=0; i < 10; i++){
		liczbyLosowe[i]= (rand()% 100 )+ 10;	
		cout << liczbyLosowe[i] << " ";	
	}
	
	
	for (int i=0; i < 10; i++){
		if (liczbyLosowe[i]%2==0){
			iloscParzystych++;}
		else {
			iloscNieparzystych++;	}
	}
	
	cout <<"Liczby Parzyste: " << iloscParzystych;
	cout << "Liczby Nieparzyste " << iloscNieparzystych;
}

int main (){
	liczby();
	return 0;
}
