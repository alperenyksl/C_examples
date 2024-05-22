#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};

struct node *front = NULL;
struct node *rear = NULL;

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (!newnode) {
        printf("Error! Memory isn't allocated.\n");
        exit(1);
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}

void enqueue(int data) {
    struct node* newnode = createnode(data);
    if (rear == NULL) {
        front = rear = newnode;
        return;
    }
    rear->next = newnode;
    rear = newnode;
}

void dequeue() {
    if (front == NULL) {
        printf("Queue is empty!\n");
        return;
    }
    struct node* temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    free(temp);
}

void displayqueue() {
    struct node* temp = front;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Queue before dequeue operations:\n");
    displayqueue();

    dequeue();
    printf("Queue after one dequeue operation:\n");
    displayqueue();

    dequeue();
    printf("Queue after two dequeue operations:\n");
    displayqueue();

    dequeue();
    printf("Queue after three dequeue operations:\n");
    displayqueue();

    return 0;
}
