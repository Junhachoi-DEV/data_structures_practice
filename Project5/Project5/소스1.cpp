/*
#include <iostream>
#include <string.h>
using namespace std;

struct product {
	char name[10];
	int num;
	int pay;
	int cost;
};

void main() {
	product products[3];
	int total;

	for (int i = 0; i < 3; i++)
	{
		cout << "ǰ��: ";
		cin >> products[i].name;
		cout << endl;

		cout << "����: ";
		cin >> products[i].num;
		cout << endl;

		cout << "�ܰ�: ";
		cin >> products[i].pay;
		cout << endl;

		products[i].cost = products[i].num * products[i].pay;
	}

	cout << "[ǰ�� 3���� ����, �ܰ�, �ݾ� ���]" << endl;
	cout << "��ǰ�� " << "����  " << "����  " << "�ݾ�(õ��)" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << products[i].name 
			<< "  " 
			<< products[i].num
			<< "  " 
			<< products[i].pay 
			<< "  " 
			<< products[i].cost << endl;
	}
	
}
*/
