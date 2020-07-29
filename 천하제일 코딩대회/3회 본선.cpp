#include <iostream>
#include <string>
using namespace std;

int main(){
	int num;
	
	
	cin>>num;
	cin.clear();
	string str[num+1];
	for(int i=0; i<=num; i++)
		getline(cin, str[i]);

	for(int i=0; i<=num; i++){
		if(str[i]=="anj"){
			cout<<"构具;";
			return 0;
		}
	}
	cout<<"构具?";
	return 0;
}
