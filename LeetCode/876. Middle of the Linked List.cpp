#include <iostream>

using namespace std;


// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *first = head;
        ListNode *second = head;
        ListNode *prev = head;

        while (second != nullptr && second->next != nullptr) {
            prev = first;
            first = first->next;
            second = second->next->next;
        }

        //If there are two middle nodes, return the second middle node.
        return first;

        //If there are two middle nodes, return the first middle node.
        //return prev;
    }
};


// Function to print the linked list from a given node
void printList(ListNode* node) {
    while (node) {
        cout << node->val << " ";
        node = node->next;
    }
    cout << endl;
}

// Function to create a linked list from user input
ListNode* createLinkedList() {
    ListNode* head = nullptr;
    ListNode* current = nullptr;

    //cout << "Enter the number of elements in the linked list: ";
    int n;
    cin >> n;

    //cout << "Enter the elements of the linked list: ";
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        if (!head) {
            head = new ListNode(value);
            current = head;
        } else {
            current->next = new ListNode(value);
            current = current->next;
        }
    }

    return head;
}

int main() {
    Solution findSolution;

    // Create a linked list from user input
    ListNode* head = createLinkedList();

    // Find the middle node
    ListNode* result = findSolution.middleNode(head);

    // Print the result
    // cout << "Middle node(s): ";
    printList(result);

    // Free the memory allocated for the linked list
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
