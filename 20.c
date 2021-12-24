#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 10

struct stack{
    int array[MAXSIZE];
    int top;
};

struct queue{
    int array[MAXSIZE];
    int front;
    int rear;
};

//Checks if the stack is empty

struct stack st;
struct queue qu;


int isEmpty(){
    if (st.top == -1){
        return 1;
    }
    else {
        return 0;
    }
}

//Checks if the stack is full
int isFull(){
    if (st.top == MAXSIZE-1){
        return 1;
    }
    else {
        return 0;
    }
}

//Pushing item in the stack
void spush(int item){
    if (isFull() == 0){
        st.top ++;
        // printf("\nTop: %d\n", st.top);
        st.array[st.top] = item;
        return;
    }
    else {
        printf("Stack is Full\n");
        return;
    }
}

//Poping the item from the stack
int spop(){
    if (isEmpty() == 0){
        int popitem = st.array[st.top];
        st.top--;
        // printf("\nTop: %d\n", st.top);
        return popitem;
    }
    else {
        printf("Stack is Empty\n");
        return 0;
    }
}

//Printing all the elements in the stack
void printStack(){
    int i;
    printf("Stack: ");
    for (i=st.top;i>-1;i--){
        printf("%d\t", st.array[i]);
    }
    return;
}

//Checking if the queue is empty
int QueueEmtpy(){
    if (qu.front == -1 && qu.rear == -1){
        return 1;
    }
    else {
        return 0;
    }
}

//Checking if the queue is full
int QueueFull() {
    if (qu.rear == MAXSIZE-1){
        return 1;
    }
    else {
        return 0;
    }
}

//Pushing items in queue
void qpush(int item) {
    if (QueueEmtpy() == 1){
        qu.front++;
        qu.rear++;
        qu.array[qu.rear] = item;
    }
    else {
        if (QueueFull() == 0){
            qu.rear++;
            qu.array[qu.rear] = item;
            return;

        }
        else {
            printf("Queue is Full]\n");
            return;
        }

    }
}

void printQueue(){
    printf("\nQueue: ");
    for (int i=qu.front;i<=qu.rear;i++){
        printf("%d\t", qu.array[i]);
    }


}

void reversify(int limit){
    int c = limit;
    int temp[10];
    st.top = -1;
    qu.front = -1;
    qu.rear = -1;
    for (int i=0;i<=limit;i++){
        spush(i+1);
    }
    printStack();

    for (int j=0;j<=limit;j++){
        int element = spop();
        temp[c] = element;
        c--;
    }

    for (int q=0; q<=limit; q++){
        int element_rev = temp[q];
        qpush(element_rev);
    }
    printQueue();
}


int main(void){
    int limit;
    printf("Enter limit: ");
    scanf("%d", &limit);
    reversify(limit);
}
