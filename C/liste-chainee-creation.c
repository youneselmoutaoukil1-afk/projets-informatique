#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    struct Node* temp = NULL;

    for(int i = 1; i <= 10; i++) {
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = i;
        newNode->next = NULL;

        if(head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    struct Node* current = head;
    for(int i = 0; i < 10; i++) {
        printf("Element %d: %d\n", i+1, current->data);
        current = current->next;
    }

    return 0;
}

