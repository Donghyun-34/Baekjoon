/*
	만든 사람 : 김동현(akakak413@naver.com)
	만단 날짜 : 2019년 11월 8일
	코드 내용 : 정수 n개가 담겨있는 배열 a 가 주어졌을 때 n개 정수들의 합을 구하기. 
	문제 출처 : 백준 알고리즘(15596번 정수 N개의 합) 
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
