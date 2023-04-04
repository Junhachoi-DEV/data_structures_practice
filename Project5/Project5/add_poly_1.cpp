#include <iostream>
#include "add_poly.h"
using namespace std;

polynomial _addpoly(polynomial a, polynomial b) {
	polynomial c;

	int a_index = 0;
	int b_index = 0;
	int c_index = 0;

	int a_degree = a.degree;
	int b_degree = b.degree;
	c.degree = MAX(a.degree, b.degree);

	while (a_index <= a.degree && b_index <= b.degree)
	{
		if (a_degree > b.degree) {
			c.coef[c_index++] = a.coef[a_index++];
			a_degree--;
		}
		else if(a_degree == b_degree)
		{
			c.coef[c_index++] = a.coef[a_index++] + b.coef[b_index++];
			a_degree--;
			b_degree--;
		}
		else
		{
			c.coef[c_index++] = b.coef[b_index++];
			b_degree--;
		}
	}

	return c;
}


void print_poly(polynomial p) {
	int i, degree;
	degree = p.degree;

	for (i = 0; i <= p.degree; i++)
	{
		cout << p.coef[i] << degree--;
		if (i < p.degree)
			cout << " +";
	}

	cout << endl;
}