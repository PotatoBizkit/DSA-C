#include <stdio.h>
#include<stdlib.h>

#define Max 100

typedef struct stack
{
    int data[Max];
    int top;
}stk;

void initialize(stk* s){
    s->top = -1;
}

int isEmpty(stk* s){
    return s->top == -1;
}

int isFull(stk* s){
    return s->top == Max - 1;
}

void push(stk* s, int val){
    if (!isFull(s))
    {
        s->top += 1;
        s->data[s->top] = val;
    }
    else{
        printf("Stack Overflow\n");
    }
}

int pop(stk* s){
    if (!isEmpty(s))
    {
        int data = s->data[s->top];
        s->top -= 1;
        return data;
    }
    else{
        printf("Stack Underflow\n");
        return -1;
    }
}

int main(){
    stk s;
    initialize(&s);
    push(&s, 44);
    push(&s, 10);
    push(&s, 62);
    push(&s, 123);
    push(&s, 15);
    push(&s, 44);
    push(&s, 10);
    push(&s, 62);
    push(&s, 123);
    push(&s, 15);

    printf("Stack elements: ");
    for (int i = 0; i <= s.top; i++){
        printf("%d ", s.data[i]);
    }
    
    printf("\n");

    printf("Popped elements: ");
    while(!isEmpty(&s)){
      int data = pop(&s);
      printf("%d ",data);
    }

    return 0;
}