#include <stdio.h>

#define MAXSIZE 8

int stack[MAXSIZE];
int top = -1;

int isEmpty(){
    return top == -1;
}

int isFull(){
    return top == MAXSIZE - 1;
}

void push(int val){
    if (!isFull()){
        top += 1;
        stack[top] = val;
    }
    else
        printf("Stack Overflow\n");
}

int pop(){
    if (!isEmpty())
    {
        int data = stack[top];
        top -= 1;
        return data;
    }
    else{
        printf("Stack Underflow\n");
        return -1;
    }
}

int main(){
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);
    push(44);
    push(10);
    push(62);
    push(123);
    push(15);

    printf("Stack elements: ");
    for (int i = 0; i < top; i++){
        printf("%d ", stack[i]);
    }
    
    printf("\n");

    printf("Popped elements: ");
    while(!isEmpty()){
      int data = pop();
      printf("%d ",data);
    }

    printf("\n");

    printf("Stack empty: %s\n", isEmpty()?"true":"false");
    printf("Stack full: %s\n", isFull()?"true":"false");
    return 0;
}