/*
���� : ���� ���ᱸ�� ����, �ܼ�â���� �ԷµǴ� EOF�� �о �����ϱ�.
���� ��� : �ܼ�â������ EOF�� Ctrl+Z�̰�, c/c++�� scanf/cin�� �ش� �Է��� ������ -1�� ��ȯ�ϴ� ������ �̿�. 
*/
#include <iostream>
using namespace std;

int main(){
	int num_1=1, num_2=1;
	
	while((cin>>num_1>>num_2)){ // num_1�̳� num_2�� EOF�� �ԷµǸ� -1�� ��ȯ �Ǳ� ������ �ش� ������ ���� �������� ����/. 
		cout<<num_1+num_2<<endl;
	}
	return 0;
}
