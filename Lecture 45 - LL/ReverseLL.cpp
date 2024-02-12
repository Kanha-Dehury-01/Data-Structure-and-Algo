#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *reverseLinkedList(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

void solve(Node *&head, Node *prev, Node *curr)
{

    if (curr == NULL)
    {
        head = prev;
        return;
    }

    solve(head, curr, curr->next);
    curr->next = prev;
}

Node *solve(Node *head)
{

    if (head == NULL)
    {
        return head;
    }

    Node *newHead = solve(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);
    Node *node2 = new Node(20, node1);
    Node *node3 = new Node(30, node2);
    Node *node4 = new Node(40, node3);
    Node *node5 = new Node(50, node4);

    Node *head = node5;

    print(head);
    head = reverseLinkedList(head);
    print(head);

    return 0;
}