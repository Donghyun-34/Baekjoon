/*
내용 : 따로 종료구문 없이, 콘솔창에서 입력되는 EOF를 읽어서 종료하기.
접근 방법 : 콘솔창에서의 EOF는 Ctrl+Z이고, c/c++의 scanf/cin은 해당 입력을 받으면 -1을 반환하는 성질을 이용. 
*/
#include <iostream>
using namespace std;

int main(){
	int num_1=1, num_2=1;
	
	while((cin>>num_1>>num_2)){ // num_1이나 num_2에 EOF가 입력되면 -1이 반환 되기 때문에 해당 구문을 종료 조건으로 선택/. 
		cout<<num_1+num_2<<endl;
	}
	return 0;
}
