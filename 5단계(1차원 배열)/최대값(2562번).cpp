/*
���� : �Է� �� �߿����� �ִ밪�� �ش� ���� ���. 
���� ��� : �迭 ��� 
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
