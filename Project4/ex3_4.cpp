#include <iostream>
#include "list_s.h"
using namespace std;

int main(void) {
	int list[MAX] = { 10, 20, 40, 50, 60, 70 };
	int i, move, size = 6;

	cout << "삽입 전 선형 리스트: " << endl;
	for ( i = 0; i < size; i++)
	{
		cout << list[i] << endl;
	}
	cout << "원소의 갯수 : " << size << endl;

	move = insert_element(list, size, 30);
	cout << "삽입 후 선형 리스트: " << endl;
	for (i = 0; i <= size; i++)
	{
		cout << list[i] << endl;
	}
	cout << "원소의 갯수 : " << ++size << endl;
	cout << "자리 이동 횟수" << move << endl;

	move = delete_element(list, size, 30);
	if (move == size) {
		cout << "선형 리스트에 원소가 없어서 삭제할 수 없습니다. " << endl;
	}
	else
	{
		cout << "삭제 후 선형 리스트: " << endl;
		for (i = 0; i < size-1; i++)
		{
			cout << list[i] << endl;
		}
		cout << "원소의 갯수 : " << --size << endl;
		cout << "자리 이동 횟수" << move << endl;
	}

	return 0;
}