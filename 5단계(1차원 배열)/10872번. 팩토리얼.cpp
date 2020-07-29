/*
백준 10872번 팩토리얼.
내용 : 팩토리얼 기능 구현
접근 방법 : 주어진 범위 내의 반복 연산.
			1. 반복문(for문) 사용
			2. 재귀함수 사용. -> 차후에 시도. 
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
