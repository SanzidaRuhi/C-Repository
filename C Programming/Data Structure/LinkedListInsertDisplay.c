#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

//**denotes pointer to a pointer
void insertNode(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void display(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf(" null\n");
}

int main() {
    struct Node* head = NULL;
    insertNode(&head, 1);//use & to pass head to the pointer
    insertNode(&head, 2);
    insertNode(&head, 3);
    display(head);
    return 0;
}
