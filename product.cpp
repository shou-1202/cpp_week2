#include <iostream>
using namespace std;
int main(){
	int a,b,product,digits=0;
	cout<<"Enter 2 numbers: ";
	cin>> a;
	cin>> b;
	product = a*b;
	cout<<"\nProduct - "<<product;
	while(product>0){
		product=product/10;
		digits++;
	}
	cout<<"\nCount of Digits - "<<digits;
}
/*Enter 2 numbers: 5
6

Product - 30
Count of Digits - 2
*/