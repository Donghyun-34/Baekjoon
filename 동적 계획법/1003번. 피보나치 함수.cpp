/*
	���� ��ȹ�� ������ ����.(���� 1003��. �Ǻ���ġ �Լ�.)
	���� ���� : ������ �׽�Ʈ ���̽����� 0�� 1�� ��µǴ� Ƚ���� ����ؼ� ���. 
	���� ��� : ����Լ��� �Ǻ���ġ�� ���ϱ� ������ 0��1�� ������ ������ �� 
	������ ī��Ʈ ���� ����. 
*/
#include <iostream>
using namespace std; 
int count_0=0, count_1=0;

int fibonacci(int n) {
    if (n == 0) {
    	count_0++;
        return 0;
    } else if (n == 1) {
    	count_1++;
    	return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
	int test_case=0;
	cin>>test_case;
	int num=0;
	while(test_case>0){
		cin>>num;
		fibonacci(num);
		cout<<count_0<<" "<<count_1<<endl;
		test_case--;
	}
}
