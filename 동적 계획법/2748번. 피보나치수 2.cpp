/*
	동적 계획법 연습용 문제.(백준 2748번. 피보나치수2.)
	문제 목적 : N이 주어지면, N번째 피보나치 수를 계산하여 출력.(이때, 동적 할당을 사용한다.)
	접근 방법 : 주어진 N만큼 int형 배열을 선언하고, 피보나치 수를 계산하여 출력.
			-> 배열을 사용하지 않고, 변수 2개만 가지고도 구할 수 있지만 해당 문제는 동적할당을
			연습하기 위한 문제이므로 배열을 사용한다.
	적용 알고리즘 : 동적 계획법(Bottom_Up)
*/
#include <iostream>
using namespace std;

int main(){
	int num=0;
	cin>>num;
	long long *res=new long long [90];
	res[0]=0;
	res[1]=1;
	for(int i=2; i<=num; i++){
		res[i]=res[i-2]+res[i-1];
	}
	cout<<res[num];
	delete[] res;
	return 0;
}
