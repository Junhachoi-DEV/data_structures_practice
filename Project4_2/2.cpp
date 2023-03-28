/*
#include <iostream>
#include <string.h>
using namespace std;

void main() {
	char *p[3];
	char imsi[100];
	int i, size;

	for (i = 0; i < 3; i++)
	{
		cout << "문자 입력: ";
		gets_s(imsi);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);
		strcpy_s(p[i], size + 1, imsi);
	}
	//cout << endl;
	cout << "입력과 반대로 출력: " << endl;

	for ( i = 2; i >= 0; i--)
	{
		cout << i + 1 << ":" << p[i] << endl;
	}

	for (i = 0; i < 3; i++) {
		free(p[i]);
	}
}
*/