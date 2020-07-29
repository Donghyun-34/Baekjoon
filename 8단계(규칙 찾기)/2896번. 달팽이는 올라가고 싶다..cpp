/*
	규칙성 유추 연습용.(백준 2896번. 달팽이는 올라가고 싶다.) 
	문제 분석 : 낮에는 A만큼 움직이고, 밤이 되면 B만큼 미끄러져 내려오는 달팽이가 C만큼의 거리를 움직이는데 걸리는 시간을 구하는 문제.
	해 선택 전략 : 달팽이가 한번에 목표에 도달하는 경우를 처리하기 위해서 C에서 A만큼을 빼주고, 나머지 값을 A-B로 나누어 준다.
				   그리고 나머지의 유무에 따라서 결과 반환. 
*/
#include <stdio.h>

int main(){
	int a,b,c,day, rem, dis;
	scanf("%d %d %d", &a, &b, &c);
	rem=c-a;
	dis=a-b;
	if(rem%dis==0)
		day=(rem/dis)+1;
	else
		day=(rem/dis)+2;
	
	printf("%d", day);
	return 0;
} 
