#include <iostream>
#include <string>
using namespace std;

int main()
{
	string num;
	
	cin>>num;
	if(num.size()==1){
		cout<<"?(?????)?..�Ƣ� ����!!";
		return 0;
	}
	int temp=num[1]-num[0];
	for(int i =2; i<num.size(); i++){
		if(num[i]-num[i-1]!=temp){
			cout<<"��ĩ��!! <(�� ? ��)>";
			return 0;
		}
	}
	cout<<"?(?????)?..�Ƣ� ����!!";
	return 0;
}
