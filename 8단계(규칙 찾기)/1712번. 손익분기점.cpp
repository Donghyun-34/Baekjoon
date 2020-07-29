/*
	백준 알고리즘 1712번 손익분기점.
	문제 분석 : 손익분기점을 구하여 출력
	접근 방법 : 손익분기점을 구하는 식 사용.(고정비/(1-변동비/매출액)) 
			-> 사용식 : 1. 개당 가격- 가변비용. ->a
						2. 고정 비용/(a+1);
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
