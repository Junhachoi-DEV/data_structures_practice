#pragma once
#define STACK_SIZE 100

typedef int element;
element stack[STACK_SIZE];

int is_stack_empty(void);
int is_stack_full(void);
void push(element item);
element pop(void);
element peek(void);
void print_stack(void);
