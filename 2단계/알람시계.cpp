#include <iostream>
using namespace std;

int main(){
	int hour, min;
	int dieced=45;
 
	cin>>hour>>min;	
	int num=min;
	if(num-dieced<0){
		min=60+(num-dieced);
		hour--;
		if(hour<0)
			hour=23;
	}
	else
		min=min-dieced;
		
	cout<<hour<<" "<<min;
		
	return 0;
}
