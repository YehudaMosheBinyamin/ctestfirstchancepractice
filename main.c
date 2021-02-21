#include "stack.h"
#include <stdio.h>
int main() 
{
    int arr[3] = { 3,4,5 };
    Stack *stack=CreateStack();
    StackPush(stack, arr[0]);
    printf("%d\n", stack->head->data);
    StackPush(stack, arr[1]);
    printf("%d\n", stack->head->data);
    StackPush(stack, arr[2]);
    printf("%d\n", stack->head->data);
    printf("%d\n",StackPop(stack));
    printf("%d\n", StackPop(stack));
    printf("%d\n", StackPop(stack));
    StackPush(stack, arr[2]);
     return 0;
}