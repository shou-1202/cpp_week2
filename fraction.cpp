#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	char slash1;
	char slash2;
	cout<<"Enter first fraction: ";
	cin>> a >>slash1>>b;
	cout<<"Enter second fraction: ";
	cin>> c>>slash2>>d;
	int numerator = a*c;
	int denominator = b*d;
	cout<<"Product: "<< numerator<<"/"<< denominator;
}