//전역변수 링크에러 테스트
#include<stdio.h>
int a = 1234;
#pragma warning(disable:4996)
int main(void)
{
	printf("%d", b);//링크에러는 아닌상태
	getchar();
	return 0;
}