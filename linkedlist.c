#include <stdio.h>
#include <stdlib.h>

// Define a node of the linked list
struct Node {
   int data;
   struct Node* next;
};

// Print the elements of the linked list
void printList(struct Node* node) {
   while (node != NULL) {
      printf("%d ", node->data);
      node = node->next;
   }
   printf("\n");
}

// Add a node to the beginning of the linked list
void insertAtBeginning(struct Node** head_ref, int new_data) {
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = *head_ref;
   *head_ref = new_node;
}

// Add a node to the end of the linked list
void insertAtEnd(struct Node** head_ref, int new_data) {
   struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = NULL;

   if (*head_ref == NULL) {
      *head_ref = new_node;
      return;
   }

   struct Node* last = *head_ref;
   while (last->next != NULL) {
      last = last->next;
   }

   last->next = new_node;
}

// Remove a node from the linked list
void removeNode(struct Node** head_ref, int key) {
   struct Node* temp = *head_ref;
   struct Node* prev = NULL;

   if (temp != NULL && temp->data == key) {
      *head_ref = temp->next;
      free(temp);
      return;
   }

   while (temp != NULL && temp->data != key) {
      prev = temp;
      temp = temp->next;
   }

   if (temp == NULL) {
      return;
   }

   prev->next = temp->next;
   free(temp);
}

int main() {
   struct Node* head = NULL;

   // Insert nodes
   insertAtEnd(&head, 1);
   insertAtEnd(&head, 2);
   insertAtBeginning(&head, 3);
   insertAtEnd(&head, 4);
   insertAtBeginning(&head, 5);

   // Print the linked list
   printf("Original List: ");
   printList(head);

   // Remove a node
   removeNode(&head, 3);

   // Print the linked list again
   printf("List after removing 3: ");
   printList(head);

   // Free allocated memory
   struct Node* current = head;
   while (current != NULL) {
      struct Node* next = current->next;
      free(current);
      current = next;
   }

   return 0;
}

