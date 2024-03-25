#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are: ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    FILE *file = fopen("stack.txt", "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    // Pushing elements onto the stack
    push(1);
    push(2);
    push(3);
    push(4);

    // Writing stack elements to file
    for (int i = top; i >= 0; i--) {
        fprintf(file, "%d\n", stack[i]);
    }
    printf("Stack elements written to file\n");

    fclose(file);

    file = fopen("stack.txt", "r");
    if (file == NULL) {
        printf("Error opening file\n");
        return 0;
    }

    // Popping elements from the stack
    while (top != -1) {
        int value = pop();
        printf("Popped value: %d\n", value);
    }

    // Reading stack elements from file
    int value;
    while (fscanf(file, "%d", &value) != EOF) {
        push(value);
    }
    printf("Stack elements read from file\n");

    fclose(file);

    // Displaying stack elements
    display();

    return 0;
}
