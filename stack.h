#ifndef _STACK_H
#define _STACK_H

//UN GRAN CAMBIO!!

//structa definitions
typedef struct st_Stack {
struct st_Node *first;
unsigned int count;
} Stack;

typedef struct st_Node {
unsigned int value;
struct st_Node *next;
} Node;

//prototypes
Stack * createStack(void);
int push(Stack *stack, int value);
int pop(Stack *stack);
int stackSize(Stack *stack);
void destroyStack(Stack *stack);

#endif
