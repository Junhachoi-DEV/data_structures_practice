#include <iostream>
#include "list_s.h"
using namespace std;

int main(void) {
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;

	cout << "���� �� ���� ����Ʈ: " << endl;
	for ( i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
	cout << "������ ���� : " << size << endl;

	move = insert_element(list, size, 30);
	cout << "���� �� ���� ����Ʈ: " << endl;
	for (i = 0; i <= size; i++)
	{
		cout << list[i] << endl;
	}
	cout << "������ ���� : " << ++size << endl;
	cout << "�ڸ� �̵� Ƚ��" << move << endl;

	move = delete_element(list, size, 30);
	if (move == size) {
		cout << "���� ����Ʈ�� ���Ұ� ��� ������ �� �����ϴ�. " << endl;
	}
	else
	{
		cout << "���� �� ���� ����Ʈ: " << endl;
		for (i = 0; i < size-1; i++)
		{
			cout << list[i] << endl;
		}
		cout << "������ ���� : " << --size << endl;
		cout << "�ڸ� �̵� Ƚ��" << move << endl;
	}

	return 0;
}