#include <iostream>
using namespace std;


void hanoi(int n, int start, int work, int target);

void main() {
	hanoi(3, 'A', 'B', 'C');
}

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		cout << start << "����" << n << "��" << target << " �� " << endl;
	}
	else
	{
		hanoi(n - 1, start, work, target);
		cout << start << "����" << n << "��" << target << " �� " << endl;
		hanoi(n - 1, start, work, target);
	}
}