/*
내용 : 입력 값들의 나머지 중 중복 검사. 
접근 방법 : 입력과 동시에 비교 실행.
차선책 : 입력 종료 후 따로 검사 실행. 
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
