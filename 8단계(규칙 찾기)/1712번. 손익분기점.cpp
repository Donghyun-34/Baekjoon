/*
	���� �˰��� 1712�� ���ͺб���.
	���� �м� : ���ͺб����� ���Ͽ� ���
	���� ��� : ���ͺб����� ���ϴ� �� ���.(������/(1-������/�����)) 
			-> ���� : 1. ���� ����- �������. ->a
						2. ���� ���/(a+1);
*/
#include <iostream>
using namespace std;

int main(){
	int a,b,c, temp=0;
	
	cin>>a>>b>>c;
	temp=c-b;
	int res=0;
	
	if(temp<=0)
		cout<<"-1";
	else{
		res=a/temp+1;
		cout<<res;
	}
}
