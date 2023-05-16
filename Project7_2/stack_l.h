#pragma once
typedef int element;

typedef struct stack_node {
	element data;
	struct stack_node* link;
} stack_node;

stack_node* top;

int is_stack_empty(void);
void push(element item);
element pop(void);
element peek(void);
void print_stack(void);
