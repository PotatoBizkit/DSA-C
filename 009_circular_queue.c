#include <stdio.h>

#define MAX 100

typedef struct Queue{
    int data[MAX];
    int front;
    int rear;
}que;

void initialize(que* q){
    q->front = -1;
    q->rear = -1;
}

int isEmpty(que* q){
    return q->front == -1;
}

int isFull(que* q) {
   return( (q->front == q->rear + 1) || (q->front == 0 && q->rear == MAX-1));
}

void enqueue(que* q, int val){
    if (!isFull(q)){
        if(isEmpty(q)){
            q->front+=1;
        }
        q->rear = (q->rear + 1) % MAX;
        q->data[q->rear]=val;
    }
    else{
        printf("Full");
    }
}

int dequeue(que* q) {
    if (isEmpty(q)) {
        printf("Empty\n");
        return -1;
    }
    int val = q->data[q->front];
    if (q->front == q->rear) {
        q->front = -1;
        q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
    return val;
}

void display(que* q){
    if (isEmpty(q)) {
        printf("Empty\n");
        return;
    }
    int i = q->front;
    while (1) {
        printf("%d ", q->data[i]);
        if (i == q->rear) break;
        i = (i + 1) % MAX;
    }
}

int main(){
    que q;
    initialize(&q);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    display(&q);

    printf("\nDequeued: %d\n", dequeue(&q));

    display(&q);

    return 0;
}