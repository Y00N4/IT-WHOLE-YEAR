#include <iostream>
using namespace std;

int main(){

	int liczbydzieci[10]= {5,99,3,7,111,13,4,24,4,8};
	int w; 
	int pierwszaparzysta= 0;
	
	for (int i=0; i < 10; i++ ){
		if (liczbydzieci[i]%2==0){
			pierwszaparzysta = liczbydzieci[i];
			break;
		}	
	}

	cout << pierwszaparzysta;
	return 0;
}


