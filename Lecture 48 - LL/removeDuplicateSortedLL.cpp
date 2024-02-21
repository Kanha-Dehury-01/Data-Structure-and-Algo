#include <bits/stdc++.h>
using namespace std;

class Node
{
    public : 
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
        
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
        
    }
    Node(int data, Node *next, Node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
        
    }
    
};

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {

            Node *forw = curr->next;
            Node *NTD = curr->next;
            if (forw->next == NULL)
            {
                curr->next = NULL;
            }
            else
            {
                forw = forw->next;
                curr->next = forw;
                forw->prev = curr;
            }
            delete NTD;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    temp->prev = tail;
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
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,2);
    insertAtTail(tail,2);
    insertAtTail(tail,4);
    insertAtTail(tail,5);

    print(head);

    print(removeDuplicates(head));
}