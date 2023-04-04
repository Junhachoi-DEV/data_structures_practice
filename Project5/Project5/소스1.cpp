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
		cout << "품목: ";
		cin >> products[i].name;
		cout << endl;

		cout << "수량: ";
		cin >> products[i].num;
		cout << endl;

		cout << "단가: ";
		cin >> products[i].pay;
		cout << endl;

		products[i].cost = products[i].num * products[i].pay;
	}

	cout << "[품목 3개의 수량, 단가, 금액 출력]" << endl;
	cout << "상품명 " << "수량  " << "가격  " << "금액(천원)" << endl;
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
