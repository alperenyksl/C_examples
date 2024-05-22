#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

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

void push(int data) {
    struct node* newnode = createnode(data);
    newnode->next = top;
    top = newnode;
}

void pop() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    struct node* temp = top;
    top = top->next;
    free(temp);
}

void displaystack() {
    struct node* temp = top;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Stack before pop operations:\n");
    displaystack();

    pop();
    printf("Stack after one pop operation:\n");
    displaystack();

    pop();
    printf("Stack after two pop operations:\n");
    displaystack();

    pop();
    printf("Stack after three pop operations:\n");
    displaystack();

    return 0;
}
