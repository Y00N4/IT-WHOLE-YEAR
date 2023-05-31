//tablica dwuwymiarowa 123 456 789 policzyc sume po przekontnych

#include <iostream>
using namespace std;

void dodawaniepoprzekatnej(){
	int tab2D[3][3] ={{1,2,3},{4,5,6},{7,8,9}};
 	int suma=0;
 	int sumadruga=0;
 	
//	for (int i=0; i<3; i++){
//		for (int j=0; j<3; j++){
//		cout << tab2D[i][j];
//	 }
//	 cout << endl;
//	}
//		
	for (int i=0;i<3;i++){
		for (int j=0; j<3; j++){
			if(i==j){
		suma+=tab2D[i][j];	
			}
		}
	}	
	for (int i=2;i>=0;i--){
		cout << "i" << i << endl;
		for (int j=0;j<3;j++) {
			if (i+j==2) {
			cout << "j" << j << endl;			
			sumadruga+=tab2D[i][j];	
			}
		}
}
	cout << "suma: " << suma << endl;
	cout << "sumadruga: "<< sumadruga; 
}

int main(){
	dodawaniepoprzekatnej();
}
