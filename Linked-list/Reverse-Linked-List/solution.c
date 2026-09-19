#include <stdio.h>
#include <stdlib.h>

// Definition for singly-linked list node
struct ListNode {
    int val;
    struct ListNode *next;
};

// LeetCode function
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    struct ListNode *nextTemp = NULL;

    while (curr != NULL) {
        nextTemp = curr->next; // Store next node
        curr->next = prev;     // Reverse current node's pointer
        prev = curr;           // Move prev forward
        curr = nextTemp;       // Move curr forward
    }

    return prev; // New head of reversed list
}

// Helper function to create a new node
struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Helper function to print linked list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Local testing block
int main() {
    // Test Case 1: Standard linked list (1 -> 2 -> 3 -> 4 -> 5)
    struct ListNode* head1 = createNode(1);
    head1->next = createNode(2);
    head1->next->next = createNode(3);
    head1->next->next->next = createNode(4);
    head1->next->next->next->next = createNode(5);

    printf("Test 1 Original: ");
    printList(head1);
    struct ListNode* reversed1 = reverseList(head1);
    printf("Test 1 Reversed: ");
    printList(reversed1);

    // Test Case 2: Edge case (Single element)
    struct ListNode* head2 = createNode(1);
    printf("\nTest 2 Original: ");
    printList(head2);
    struct ListNode* reversed2 = reverseList(head2);
    printf("Test 2 Reversed: ");
    printList(reversed2);

    return 0;
}