#include <iostream>
using namespace std;

void init(int temp[], int num){
	int i=0;
	while(num>0){
		temp[i]=num%10;
		num=num/10;
		i++;
	}
}

int main(){
	int num_1, num_2;
	int temp[3]={0};
	int res[3]={0};

	cin>>num_1>>num_2;
	init(temp, num_2);
	int j=0;
	
	for(int i=0; i<3; i++){
			res[i]+=num_1*temp[j++];
			cout<<res[i]<<endl;
	}

	cout<<res[0]+res[1]*10+res[2]*100;
}
