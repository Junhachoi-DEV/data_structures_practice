#include <iostream>
using namespace std;

//������
void main() {
	int a, b, temp;
	int* p1, * p2;

	cout << "a�� �Է�: ";
	cin >> a;
	cout << "b�� �Է�: ";
	cin >> b;

	//&�� �ּ� �������̴�.
	p1 = &a;
	p2 = &b;

	temp = *p1; //������ ����� �ٲ���ش�.
	*p1 = *p2;
	*p2 = temp;

	cout << "�ٲﰪ�� a�� " << a << "b�� " << b << endl;
}