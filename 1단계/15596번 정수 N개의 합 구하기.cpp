/*
	���� ��� : �赿��(akakak413@naver.com)
	���� ��¥ : 2019�� 11�� 8��
	�ڵ� ���� : ���� n���� ����ִ� �迭 a �� �־����� �� n�� �������� ���� ���ϱ�. 
	���� ��ó : ���� �˰���(15596�� ���� N���� ��) 
*/
#include <stdio.h>

long long sum(int *a, int n){
	long long sum=0;
	int i=0;
	for(i;n-i>=3;i+=3){
		sum+=(a[i]+a[i+1]+a[i+2]);
	}
	for(i;i<n;i++)
		sum+=a[i];
	return sum;
}
