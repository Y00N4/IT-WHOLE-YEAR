//ile jest kur i krów 

#include <iostream>
using namespace std;

void farma(){
	int x,y;
	int a,b;// a=ilosc kur,b= ilosc krow
	cout << "podaj liczbe glow:"<< endl;
	cin >> x; //x glowy, y nogi 
	cout << "podaj liczbe nog: "<< endl;
	if(y%4==0 && x%1==0){
		b++;
	}
	else if(y%2==0 && x%1==0){
		a++;
	}

	cout << a <<" "<< b;
	
}


int main(){
 farma();
}
