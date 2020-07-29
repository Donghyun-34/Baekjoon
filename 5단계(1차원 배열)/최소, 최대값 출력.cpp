/*
내용 : 입력 값 중에서의 최대, 최소값 출력
접근 방법 : 입력과 동시에 비교 실행.
차선책 : 입력 종료 후 큌솔트나 병합정렬로 정렬후 끝과 시작값 출력. 
*/
#include <iostream>
using namespace std;

int main(){
	int num=0;
	cin>>num;
	int max=(-1000000 - 1), min=(1000000 + 1), temp; // 최소값에는 최대범위 +1을, 최대값에는 최소범위-1로 초기화 시킨다. 
	while(num-->0){
		cin>>temp;
		if(temp<min)
			min=temp;
		if(temp>max)
			max=temp; 
	}
	cout<<min<<" "<<max;
}
