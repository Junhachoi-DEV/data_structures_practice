#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct  employee
{
	char name[10];
	int year;
	int pay;
};

void main() {
	int i;
	struct employee lee[4]
	{
		{"����ȣ", 2022, 4200},
		{"���ѿ�", 2023, 3300},
		{"�̻��", 2023, 3500},
		{"�̻��", 2024, 2900}
	};

	for (i = 0; i < 4; i++) {
		printf("\n �̸� : %s", lee[i].name);
		printf("\n �Ի� : %s", lee[i].year);
		printf("\n ���� : %s", lee[i].pay);
	}

	getchar();
}