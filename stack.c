#include "stack.h"

Stack* CreateStack()
{ 
    Node* headNode = NULL;
    headNode = (Node*)malloc(sizeof(Node));
    Node* next = NULL;
    next= (Node*)malloc(sizeof(Node));
    Stack* stack = NULL;
    stack = (Stack*)malloc(sizeof(Stack));
    stack->head =(Node*)malloc(sizeof(Node));
    stack->count = 0;
    stack->head->next = (Node*)malloc(sizeof(Node));
    return stack;
}

void DeleteStack(Stack* stack)
{
    Node* stackHead = NULL;
    while (stack->head != NULL) 
    {
        stackHead = stack->head;
        stack->head = stack->head->next;
        free(stack->head);
    }
    
}



void StackPush(Stack* stack, int item)
{
    Node* newHead = (Node*)malloc(sizeof(Node));
    Node* temp;
    temp = stack->head;
    stack->head = newHead;
    stack->count = (stack->count) + 1;
    stack->head->next = temp;
    stack->head->data = item;
}

int StackPop(Stack*stack )
{
    if (stack->count > 0) 
    {
        int popValue = stack->head->data;
        stack->head = stack->head->next;
        stack->count = (stack->count) - 1;
        return popValue;
    }
    else 
    {
        printf("ERROR CANT POP FROM EMPTY STACK");
        exit(1);
    }
}
