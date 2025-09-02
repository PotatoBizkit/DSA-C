#include <stdio.h>

#define MAX 100

typedef struct queue{
    int data[MAX];
    int front;
    int rear;
} que;

void initialize(que* q){
    q->front = -1;
    q->rear = -1;
}

int isFull(que* q){
    return q->rear == MAX - 1;
}

int isEmpty(que* q){
    return q->front == -1 || q->front > q->rear;
}

void enqueueOperation(que* q, int val){
    if (!isFull(q))
    {
        if (isEmpty(q))
        {
            q->front = 0;
        }
        q->rear++;
        q->data[q->rear] = val;
        printf("Value inserted\n");
    }
    else{
        printf("Queue overflow\n");
    }
}

int dequeueOperation(que* q){
    if (!isEmpty(q))
    {
        int data = q->data[q->front];
        q->front++;
        if (q->front > q->rear)
        {
            initialize(q);
        }
        return data;
    }
    else{
        printf("Queue underflow\n");
        return -1;
    }
}

int peek(que* q){
    if (!isEmpty(q))
    {
        return q->data[q->front];
    }
    else{
        printf("Empty queue\n");
        return -1;
    }
}

void display(que* q){
    if (!isEmpty(q))
    {
        printf("Elements of queue are: ");
        for (int i = q->front; i <= q->rear; i++)
        {
            printf("%d ", q->data[i]);
        }
    }
    else{
        printf("Empty queue\n");
    }
}

int main(){
    que q;
    initialize(&q);
    
    enqueueOperation(&q, 10);
    enqueueOperation(&q, 20);
    enqueueOperation(&q, 30);

    display(&q);

    printf("\nDequeued: %d\n", dequeueOperation(&q));

    display(&q);

    printf("\nFront element: %d\n", peek(&q));

    return 0;
}