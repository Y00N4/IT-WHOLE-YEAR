 // 1. stwor petle ktora idzie od 12 do 24 
 // 2. jezeli liczba jest podzielna przez 3 i przez 5 wychodzi z petli
 
 #include <iostream>
using namespace std;

int main (){
	for (int i=12; i <= 24; i++) {

	
	if (i%3 == 0 && i%5 == 0){
		break;}
	cout << i << endl;
}
return 0;
}
