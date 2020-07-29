#include <iostream>
using namespace std;

int main(){
	int num_1, num_2;
	
	cin>>num_1>>num_2;
	
	if(num_1>num_2)
		cout<<">\n";
	else if(num_1<num_2)
		cout<<"<\n";
	else
		cout<<"==\n";
}
