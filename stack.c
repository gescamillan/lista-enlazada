#include <stdlib.h>
#include "stack.h"

//Internal Functions
Node * createNode(int value);

//Public Functions

Stack * createStack(void) {
Stack *new_stack;
new_stack = calloc(1,sizeof(Stack));
return new_stack;
}

int push(Stack *stack, int value) {
Node *nodo;

if(stack == NULL) return 0;

nodo = createNode(value);
if(nodo == NULL) return 0;

if(stack->first == NULL) {
stack->first = nodo;
stack->count = 1;
return 1;
}

nodo->next = stack->first;
stack->first = nodo;
stack->count++;

return 1;
}

int pop(Stack *stack) {
int value;
Node *nodo;

if(stack == NULL) return -1;
if(stack->first == NULL) return -1;

nodo = stack->first;

stack->first = nodo->next;
stack->count--;

value = nodo->value;

free(nodo);

return value;

}

int stackSize(Stack *stack) {
return (stack == NULL) ? -1 : stack->count;
}

void destroyStack(Stack *stack) {
if(stack == NULL) return;
while(stack->count > 0) {
pop(stack);
}

free(stack);
}

// Internal Functions

Node * createNode(int value) {
Node *nodo;

nodo = calloc(1, sizeof(Node));
if(nodo == NULL) return NULL;

nodo->value = value;
nodo->next = NULL;

return nodo;
}
