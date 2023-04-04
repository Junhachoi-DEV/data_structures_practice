#pragma once
#define MAX(a,b) ((a>b)?a:b)
#define MAX_DEGREE 50


//����ü polynomial ����
typedef struct {
	int degree;
	float coef[MAX_DEGREE];
}polynomial;

polynomial _addpoly(polynomial a, polynomial b);
void print_poly(polynomial p);