#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
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

bool floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }

    Node*slow = head;
    Node* fast = head;

    while (fast != NULL && slow!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL){
            fast= fast->next;
        }
        slow = slow->next;
        if (fast==slow)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);

    // print(head); // code will break as loop exist
    // tail->next = head;
    if (floydDetectLoop(head))
    {
        cout << "Loop is detected " << endl;
    }
    else
    {
        cout << "No loop is detected " << endl;
    }

    return 0;
}