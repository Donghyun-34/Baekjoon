/*
���� : �Է� ������ ������ �� �ߺ� �˻�. 
���� ��� : �Է°� ���ÿ� �� ����.
����å : �Է� ���� �� ���� �˻� ����. 
*/
#include <iostream>
using namespace std;

int main(){
	int num[10];
	int cnt=0;
	for(int i=0; i<10; i++){
		cin>>num[i];
		num[i]=num[i]%42;
	}
	int j;
	for(int i=0; i<10; i++){
		for(j=1; j<10-i; j++){
			if(num[i]==num[j+i])
				break;
		}
		if(j==10-i)
			cnt++;
	}
	cout<<cnt;
}
