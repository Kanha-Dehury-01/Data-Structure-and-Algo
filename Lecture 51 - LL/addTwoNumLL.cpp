#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
private:
    struct Node *reverseLinkedList(struct Node *head)
    {
        struct Node *prev = NULL;
        struct Node *curr = head;
        struct Node *forward = NULL;

        while (curr != NULL)
        {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
    }

    void insertNode(struct Node *&head, struct Node *&tail, int data)
    {
        if (head == NULL)
        {
            struct Node *NTA = new Node(data);
            head = NTA;
            tail = NTA;
            return;
        }
        Node *temp = new Node(data);
        tail->next = temp;
        tail = temp;
    }

public:
    // Function to add two numbers represented by linked list.
    struct Node *addTwoLists(struct Node *first, struct Node *second)
    {
        first = reverseLinkedList(first);
        second = reverseLinkedList(second);

        struct Node *curr1 = first;
        struct Node *curr2 = second;

        struct Node *head = NULL;
        struct Node *tail = NULL;
        int carry = 0;

        while (curr1 != NULL && curr2 != NULL)
        {
            int num = curr1->data + curr2->data + carry;
            int digit = num % 10;
            carry = num / 10;

            insertNode(head, tail, digit);
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        while (curr1 != NULL)
        {
            int num = curr1->data + carry;
            int digit = num % 10;
            carry = num / 10;

            insertNode(head, tail, digit);
            curr1 = curr1->next;
        }

        while (curr2 != NULL)
        {
            int num = curr2->data + carry;
            int digit = num % 10;
            carry = num / 10;

            insertNode(head, tail, digit);
            curr2 = curr2->next;
        }

        while (carry > 0)
        {
            int digit = carry % 10;
            carry = carry / 10;
            insertNode(head, tail, digit);
        }

        return reverseLinkedList(head);
    }
};

int main(){



}