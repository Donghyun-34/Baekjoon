/*
만든이 : 김동현
만든 날짜 : 2019.05.02
목적 : 베르트랑 공준을 보여라.
사용 개념 : 에라토스테네스의 체 
*/
#include <stdio.h>

int main()
{
	int count, i, j, num=1;
	int arr[246913]={0,1}; // 범위 안에 존재하는 모든 소수들의 개수에 대한 배열을 선언하였다. 
	
	for(i=2; i<=497; i++) //에라토스테네스의 채 개념 사용.(소수의 배수는 소수가 아닌 성질을 사용.) 
	{
		for(j=i*i; j<=246912; j+=i)//j를 i*i로 한 이유는 앞에서 이미 제거한 배수들을 제외시키기 위해서 이다. 
		{
			arr[j]=1;
		}
	}
	
	scanf("%d", &num);
	while(num!=0)
	{
		count=0; 
		for(i=num+1;i<=(2*num);i++)
		{
			if(arr[i]==0)
				count++;
		}
		printf("%d\n", count);
		scanf("%d", &num);
	}
	return 0;
}
