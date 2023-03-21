#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//팩토리얼 구하기

long int fact(int); //재귀 함수

void main() {
	int n, result;
	printf("\n 정수를 입력하세요 : ");
	scanf("%d", &n);
	result = fact(n);
	printf("\n\n %d의 팩토리얼 값은 %ld 입니다. \n", n, result);
	getchar(); getchar();
}

long int fact(int n) {
	int value;
	if (n <= 1) {
		printf("\n fact(1) 함수 호출!");
		printf("\n fact(1) 값 1 반환!!");
		return 1;
	}
	else
	{
		printf("\n fact(%d) 함수 호출", n);
		value = (n * fact(n - 1));
		printf("\n fact(%d) 값 %ld 반환~~", n, value);
		return value;
	}
}