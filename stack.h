#pragma once
#include<windows.h>

typedef struct Node_t 
{
    int data;
    struct Node_t* next;
}Node;





typedef struct Stack_t 
{
    int count;
   Node* head;
}Stack;


/**
 * Create a new stack
 * @return 
*/
Stack* CreateStack();


/**
 *Delete a stack
 * @param  
*/
void DeleteStack(Stack* stack);


/**
 *Push an item into stack
*/
void StackPush(Stack** stack, int item);


/**
 * First element gets popped out of stack,second item in stack becomes the first
*/
int StackPop(Stack*stack);


/**
 * Get the last error code(e.g. last pop failed because the stack was empty)
 * @param  
 * @return 
*/
int StackGetLastError(Stack*);
