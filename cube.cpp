#include <iostream>
using namespace std;
int main(){
	int num, i = 1, a;
	while(i>0){
	  cout<<"\nEnter a number: ";
	  cin>> num;
	  if((num%3 ==0) & (num%2 == 0)){
		  cout<<"EXIT";
		  break;
	  }   
	  else{
		   a = num*num*num;
		   cout<<"\ncube of "<< num<<" is "<< a;
	  }
	  i++;
	}
}