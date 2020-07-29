/*
만든이: 김동현
만든 날짜: 2019.05.02
민든 목적 : 골드바흐의 추측 보이기.
적용한 개념 : 에라토스테내스의 체 
*/
#include <stdio.h>

int main()
{
	int arr[10001]={0,1}, arr2[1229];
	int i=0, j=0, cnt=0, temp=0, res=0, m_i=0, m_j=0;
	
	for(i=2; i<=100; i++)
	{
		for(j=i*i; j<=10000; j+=i)
			arr[j]=1;
	}
	j=0;
	for(i=1;i<10001;i++)
	{
		if(arr[i]==0)
			arr2[j++]=i;//다른 배열에 소수들의 인덱스 저장. 
	}//에라토스테내스의 체로 거른 후 소수들만을 다른 배열에 저장. 

	scanf("%d", &cnt);
	while(cnt>0)
	{
		res=10000;
		scanf("%d", &temp);
		for(i=0; arr2[i]<=(temp/2);i++)
		{
			for(j=i; arr2[j]<temp; j++)
			{
				if((arr2[i]+arr2[j])==temp)
				{
					if((arr2[j]-arr2[i])<res)
					{
						res=(arr2[j]-arr2[i]);
						m_i=i;
						m_j=j;
					}
				}
			}
		}
		printf("%d %d\n", arr2[m_i], arr2[m_j]);
		cnt--;
	}
	return 0;
}
