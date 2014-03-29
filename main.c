#include <stdio.h>

#include "stack.h"

int main(int argc, char *args[]) {
Stack *stack;
int i = 0;

stack = createStack();

for(i=0; i<10; i++) {
push(stack,i);
}

while(stackSize(stack)>0) {
printf("%i\n",pop(stack));
}
}
