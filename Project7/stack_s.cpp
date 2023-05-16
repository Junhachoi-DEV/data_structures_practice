#include <stdio.h>
#include "stack_s.h"

int top = -1;

int is_stack_empty(void) {
	if (top == -1) return 1;
	else return 0;
}

int is_stack_full(void) {
	if (top == STACK_SIZE - 1) return 1;
	else return 0;
}

void push(element item) {
	if (is_stack_full()) {
		printf("\n\n stack is full!!\n");
		return;
	}
	else stack[++top];
}

element pop(void) {
	if (is_stack_empty) {
		printf("\n\n stack is empty!!\n");
		return 0;
	}
	else return stack[top--];
}

element peek(void) {
	if (is_stack_full()) {
		printf("\n\n stack is empty!!\n");
		return 0;
	}
	else return stack[top];
}

void print_stack(void) {
	printf("\n stack[");
	for (int i = 0; i <= top; i++)
	{
		printf("%d", stack[i]);
	}
	printf("] ");
}

int main(void) {
	element itme;
	printf("\n** 순차 스택 연산 **\n");
	print_stack();
	push(1); print_stack();
	push(2); print_stack();
	push(3); print_stack();

	itme = peek(); print_stack();
	printf("peek => %d", itme);

	itme = pop(); print_stack();
	printf("\t pop => %d", itme);

	itme = pop(); print_stack();
	printf("\t pop => %d", itme);

	itme = pop(); print_stack();
	printf("\t pop => %d\n", itme);

	getchar(); return 0;
}