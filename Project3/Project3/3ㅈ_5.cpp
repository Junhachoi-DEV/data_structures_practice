#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#1
int sum(int a);
int main(void) {
	int result;
	result = sum(7);
	printf("result = %d\n", result);
	return 0;
}
int sum(int a) {

	printf("%02d", a);
	if (a < 1) {
		return 1;
	}
	else
	{
		return (a + sum(a - 2));
	}


	// 7 + sum(5)
	//	= 5 +sum(3)
	//		= 3+sum(1)
	//			=3+sum(-1)
	//				= 1
}

//#2
int f(int a);
int main(void) {
	int result;
	result = f(7);
	printf("result = %d\n", result);
	return 0;
}
int f(int a) {

	printf("%02d", a);
	if (a < 1) {
		return 3;
	}
	else
	{
		return (3 + f(a - 3) + 1);
	}
}