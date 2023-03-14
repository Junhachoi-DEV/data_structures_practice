#include <iostream>
using namespace std;

//포인터
void main() {
	int a, b, temp;
	int* p1, * p2;

	cout << "a를 입력: ";
	cin >> a;
	cout << "b를 입력: ";
	cin >> b;

	//&는 주소 연산자이다.
	p1 = &a;
	p2 = &b;

	temp = *p1; //빈통을 만들어 바뀌어준다.
	*p1 = *p2;
	*p2 = temp;

	cout << "바뀐값은 a는 " << a << "b는 " << b << endl;
}