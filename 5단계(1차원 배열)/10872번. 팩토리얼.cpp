/*
���� 10872�� ���丮��.
���� : ���丮�� ��� ����
���� ��� : �־��� ���� ���� �ݺ� ����.
			1. �ݺ���(for��) ���
			2. ����Լ� ���. -> ���Ŀ� �õ�. 
*/
#include <iostream>
using namespace std;

int main(){
	int num=0;
	
	cin>>num;
	int res=1;
	for(int i=num; i>0; i--)
		res*=num--;
		
	cout<<res;
}
