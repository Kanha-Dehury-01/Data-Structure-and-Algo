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

void insertNode(Node *&tail, int data, int value = 0)
{
    if (tail == NULL && value == 0)
    {
        Node *temp = new Node(data);
        temp->next = temp;
        tail = temp;
        return;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != value)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteNode(Node *&tail, int value)
{
    Node *prev = tail;
    Node *temp = prev->next;

    while (temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    if (prev == temp)
    {
        tail = NULL;
        delete temp;
    }
    else if (tail == temp)
    {
        tail = prev;
    }
    temp->next = NULL;
    delete temp;
}

void print(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "No elemwnt in list " << endl;
        return;
    }
    do
    {
        cout << tail->data << "  ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 10);
    cout << "Tail : " << tail->data << " Head: " << tail->next->data << endl;

    
    
    print(tail);
    deleteNode(tail, 10);
    print(tail);
    cout << "Tail : " << tail->data << " Head: " << tail->next->data << endl;

    return 0;
}