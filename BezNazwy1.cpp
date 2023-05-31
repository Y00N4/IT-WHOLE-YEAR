#include <iostream>
using namespace std;

int main(){
	int n=6;
	
	for (int i=1;i<=n;i++) {
    for (int j=n; j<0; j--){
 		cout << j;   
        cout << "#";
    }
    cout << endl;
}
	
}
