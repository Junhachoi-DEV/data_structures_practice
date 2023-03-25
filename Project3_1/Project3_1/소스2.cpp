#include <iostream>
using namespace std;

int n_sum(int n) {
	if (n == 1) {
		cout << n << "\n";
		return 1;
	}
	else
	{
		int a = n + n_sum(n - 1);
		cout << a << "\n";
		return a;
	}
}

void main() {
	int input_num;

	cout << "수를 입력 : ";
	cin >> input_num;

	n_sum(input_num);
}

