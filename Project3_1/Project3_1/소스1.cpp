#include <iostream>
using namespace std;


void hanoi(int n, int start, int work, int target);

void main() {
	hanoi(3, 'A', 'B', 'C');
}

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		cout << start << "에서" << n << "을" << target << " 로 " << endl;
	}
	else
	{
		hanoi(n - 1, start, work, target);
		cout << start << "에서" << n << "을" << target << " 로 " << endl;
		hanoi(n - 1, start, work, target);
	}
}