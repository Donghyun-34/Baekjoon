/*
������: �赿��
���� ��¥: 2019.05.02
�ε� ���� : ī�״޷� ���� 
������ ���� : ��Ģ�� �߰� �� �� ����. 
*/
#include <stdio.h> // �ð��ʰ� �߻�. 

int main()
{
	int m,n,x,y,i,j, num, big, small, Big, Small;
	long long int sum, count;
	
	scanf("%d", &num);
	while(num>0)
	{
		scanf("%d %d %d %d", &m, &n, &x, &y);
		i=1;
		j=1;
		Big=m>n?m:n;
		Small=m<n?m:n;
		big=m>n?x:y;
		small=m<n?x:y;
	
		if(m*n%2!=0)
			sum=m*n;
		else if(m==n)
			sum=m;
		else
			sum=m*n/2;
		for(count=1; count<=sum; count++)
		{
			if(i==big && j==small)
				break;
			else
			{
				if(i==Big)
				{
					i=1;
					j++;
				}
				else
				{
					i++;
					if(j==Small)
						j=1;
					else
						j++;
				}
			}
		}
		if(count-1==sum)
			printf("-1\n");
		else
			printf("%lld\n", count);
		num--; 
	}
	return 0;
}
