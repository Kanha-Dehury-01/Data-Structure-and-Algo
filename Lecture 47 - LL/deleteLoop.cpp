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

Node *floydDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && slow != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (fast == slow)
        {
            return fast;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    Node *fast = floydDetectLoop(head);
    Node *slow = head;
    Node *prev = NULL;

    while (slow != fast)
    {

        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

void deleteLoop(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *start = getStartingNode(head);
    Node *temp = start;
    while (temp->next != start)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtTail(tail, 40);
    insertAtTail(tail, 50);
    insertAtTail(tail, 60);

    // print(head); // code will break as loop exist
    tail->next = head->next;
    deleteLoop(head);
    print(head);
    return 0;
}
