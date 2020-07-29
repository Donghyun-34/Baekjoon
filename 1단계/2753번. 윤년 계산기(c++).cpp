#include <iostream>
using namespace std;

int main(){
	int num;
	cin>>num;
	if(num%4==0){
		if(num%100!=0 || num%400==0){
			cout<<"1";
			return 0;
		}
	}
	
	cout<<"0";
}
