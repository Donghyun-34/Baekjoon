/*
내용 : 입력 값 중에서의 최대값과 해당 순서 출력. 
접근 방법 : 배열 사용 
*/
#include <iostream>
using namespace std;

int main(){
	int arr[9], max=0;
	int temp=0;
	for(int i=0; i<9; i++){
		cin>>arr[i];
		if(arr[i]>max){
			max=arr[i];
			temp=i+1;
		}
	}
	cout<<max<<"\n"<<temp;
}
