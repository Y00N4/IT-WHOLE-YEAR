#include <iostream>
using namespace std;

void skarpetki(){
	string input= " ";
	int czarne=0, biale=0;
	
	cin >> input;
	//input.lenght();
	for (int i=0;  i< input.length(); i++){
		if (input[i] =='C'){
		czarne++; 	
		}
		else if (input[i] == 'B'){
		biale++;
		}
	}
	cout << czarne << " " << biale; 
	
	cout << czarne/2 << " ";
	cout << biale/2;	

}

int main(){
	skarpetki();
}

