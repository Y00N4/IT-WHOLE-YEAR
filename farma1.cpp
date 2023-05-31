#include  <iostream>
using namespace std;

void farma(int x, int y){
	double A, B;
	A=0.5*(4*x-y);
	B=x-A;
	cout << A <<" " << B;
}

int main(){
	int x, y;
	cin >> x >> y;
	farma(x,y);
}
