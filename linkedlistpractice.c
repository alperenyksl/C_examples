#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

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

struct node* deletenode(struct node* head, int key) {
    struct node *temp = head;
    struct node *prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with key %d not found.\n", key);
        return head;
    }

    prev->next = temp->next;
    free(temp);

    return head;
}

void displaylist(struct node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    head = createnode(1);
    second = createnode(2);
    third = createnode(3);

    head->next = second;
    second->next = third;

    printf("Linked List before deletion:\n");
    displaylist(head);

    int key = 2;
    printf("Deleting node with key %d\n", key);
    head = deletenode(head, key);  // head güncellenmiþ olabilir, bu yüzden head'i yeniden atýyoruz

    printf("Linked List after deletion:\n");
    displaylist(head);

    return 0;
}
