/*
���� : �Է� �� �߿����� �ִ�, �ּҰ� ���
���� ��� : �Է°� ���ÿ� �� ����.
����å : �Է� ���� �� �W��Ʈ�� �������ķ� ������ ���� ���۰� ���. 
*/
#include <iostream>
using namespace std;

int main(){
	int num=0;
	cin>>num;
	int max=(-1000000 - 1), min=(1000000 + 1), temp; // �ּҰ����� �ִ���� +1��, �ִ밪���� �ּҹ���-1�� �ʱ�ȭ ��Ų��. 
	while(num-->0){
		cin>>temp;
		if(temp<min)
			min=temp;
		if(temp>max)
			max=temp; 
	}
	cout<<min<<" "<<max;
}
