//w momencie kiedy dostaje dana godzine zwraca godz+1
#include <iostream>
#include <string>
using namespace std;

string timeConversion(string a){
	string pora = a.substr(8,2);//przechowuje AM
	string godzina = a.substr(0,2); //12
	
	if (pora=="AM"){
	    if(godzina != "12"){
	        return a.substr(0,8);
	    } else {
	        return "00" + a.substr(2,6);  
	    }
	} else {
	    if (godzina!="12"){
	        int godz=stoi(godzina) +12;
	        return to_string(godz)+ a.substr(2,6);
	    }
	    else{
	        return a.substr(0,8);
	    }
	}
// 	return "Blad";
}



int main(){
	string a ="11:01:00PM"; // => 00:01::00
	cout << timeConversion(a);
}
