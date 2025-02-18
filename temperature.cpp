#include <iostream>
using namespace std;
int main(){
	float temp;
	cout<<"Enter Temperature: ";
	cin>> temp;
	if(temp<40){
	  cout<<"skiing";
	}
	else if(temp<60){
		cout<<"golf";
	}
	else if(temp<80){
		cout<<"tennis";
	}
	else{
		cout<<"swimming";
	}
}