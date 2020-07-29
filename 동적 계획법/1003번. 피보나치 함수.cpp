/*
	동적 계획법 연습용 문제.(백준 1003번. 피보나치 함수.)
	문제 목적 : 각각의 테스트 케이스마다 0과 1이 출력되는 횟수를 계산해서 출력. 
	접근 방법 : 재귀함수로 피보나치를 구하기 때문에 0과1이 나오는 조건일 때 
	각각의 카운트 변수 증가. 
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
