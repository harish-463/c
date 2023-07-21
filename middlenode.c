#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct Node* findMiddle(struct Node* head) {
    struct Node* slow_ptr = head;
    struct Node* fast_ptr = head;

    if (head != NULL) {
        while (fast_ptr != NULL && fast_ptr->next != NULL) {
            fast_ptr = fast_ptr->next->next;
            slow_ptr = slow_ptr->next;
        }
    }

    return slow_ptr;
}
int main() {
    struct Node* head = NULL;
    int n, i, x;

    printf("num of nodes: ");
    scanf("%d", &n);
    printf("Enter values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        push(&head, x);
    }
    struct Node* middle = findMiddle(head);
    printf("The middle node is %d\n", middle->data);

    return 0;
}
