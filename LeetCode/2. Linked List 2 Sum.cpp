#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        while (l1 || l2 || carry) {
            int x = l1 ? l1->val : 0;
            int y = l2 ? l2->val : 0;

            int sum = x + y + carry;
            carry = sum / 10;

            current->next = new ListNode(sum % 10);
            current = current->next;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return dummyHead->next;
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

ListNode* createLinkedListFromInput() {
    ListNode* head = nullptr;
    ListNode* current = nullptr;
    int x;
    while (cin >> x) {
        if (head == nullptr) {
            head = new ListNode(x);
            current = head;
        } else {
            current->next = new ListNode(x);
            current = current->next;
        }
        if (cin.get() == '\n') {
            break;
        }
    }
    return head;
}


int main() {
    Solution findSolution;
    ListNode* l1 = createLinkedListFromInput();
    ListNode* l2 = createLinkedListFromInput();

    ListNode* result = findSolution.addTwoNumbers(l1, l2);

    printList(result);

    while (l1) {
        ListNode* temp = l1;
        l1 = l1->next;
        delete temp;
    }

    while (l2) {
        ListNode* temp = l2;
        l2 = l2->next;
        delete temp;
    }

    while (result) {
        ListNode* temp = result;
        result = result->next;
        delete temp;
    }
    return 0;
}
