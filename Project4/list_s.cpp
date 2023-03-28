#include "list_s.h"

int insert_element(int L[], int num, int x) {
	int i, k = 0, move = 0;

	for ( i = 0; i < num; i++)
	{
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}

	if (i == num) {
		k = num;
	}

	for (i =num; i > k; i--)
	{
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;
	return move;
}

int delete_element(int L[], int num, int x) {
	int i, k = num, move = 0;

	for (i = 0; i < num; i++)
	{
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == num) {
		move = num;
	}

	for (i = k; i < num -1; i++)
	{
		L[i] = L[i + 1];
		move++;
	}

	return move;
}