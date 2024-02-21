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

Node *removeDuplicates(Node *head)
{
    map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if (visited[curr->data] == false)
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
        else
        {
            Node *temp = curr;
            prev->next = temp->next;
            curr = prev->next;
            delete temp;
        }
    }
    return head;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    cout << endl;
}

int main(){
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 2);
    insertAtTail(tail, 5);
    insertAtTail(tail, 4);
    insertAtTail(tail, 2);
    insertAtTail(tail, 2);

    print(head);


    print(removeDuplicates(head));
}