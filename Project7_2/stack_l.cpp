#include <stdio.h>
#include "stack_l.h"
#include <malloc.h>

int is_stack_empty(void) {
	if (top == NULL) return 1;
	else return 0;
}

void push(element item) {
	stack_node* temp = (stack_node*)malloc(sizeof(stack_node));

	temp->data = item;
	temp->link = top;
	top = temp;
}

element pop(void) {
	element item;
	stack_node* temp = top;

	if (is_stack_empty()) {
		printf("\n\n stack_si empty! \n");
		return 0;
	}
	else
	{
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

element peek(void) {
	if (is_stack_empty()) {
		printf("\n\n stack_si empty! \n");
		return 0;
	}
	else return(top->data);
}

void print_stack(void) {
	stack_node* p = top;
	printf("\n stack[");
	while (p) {
		printf("%d", p->data);
		p = p->link;
	}
	printf("] ");
}

int main() {
	element item;
	top = NULL;
	printf("\n** 연결 스택 연산** \n");
	print_stack();

	push(1); print_stack();
	push(2); print_stack();
	push(3); print_stack();
	
	item = peek(); print_stack();
	printf("peek => %d", item);

	item = pop(); print_stack();
	printf("\t pop => %d", item);

	item = pop(); print_stack();
	printf("\t pop => %d", item);

	item = pop(); print_stack();
	printf("\t pop => %d\n", item);

	getchar(); return 0;
}