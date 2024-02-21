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

Node *sortList(Node *head)
{
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            cnt0++;
        }
        else if (temp->data == 1)
        {
            cnt1++;
        }
        else if (temp->data == 2)
        {
            cnt2++;
        }
        temp = temp->next;
    }

    temp = head;
    while (cnt0 > 0 && temp != NULL)
    {
        temp->data = 0;
        cnt0--;
        temp = temp->next;
    }
    while (cnt1 > 0 && temp != NULL)
    {
        temp->data = 1;
        cnt1--;
        temp = temp->next;
    }
    while (cnt2 > 0 && temp != NULL)
    {
        temp->data = 2;
        cnt2--;
        temp = temp->next;
    }

    return head;
}

void insertAtTail(Node *&tail, int data)
{
    Node *nta = new Node(data);
    tail->next = nta;
    tail = nta;
}

Node *sortList(Node *head)
{
    Node *head0 = new Node(-1);
    Node *head1 = new Node(-1);
    Node *head2 = new Node(-1);

    Node *tail0 = head0;
    Node *tail1 = head1;
    Node *tail2 = head2;

    Node *temp = head;
    while (temp != NULL)
    {

        if (temp->data == 0)
        {
            insertAtTail(tail0, 0);
        }
        else if (temp->data == 1)
        {
            insertAtTail(tail1, 1);
        }
        else if (temp->data == 2)
        {
            insertAtTail(tail2, 2);
        }

        temp = temp->next;
    }

    head = head0->next;
    tail0->next = head1->next;
    tail1->next = head2->next;
    tail2->next = NULL;

    delete head0;
    delete head1;
    delete head2;

    return head;
}

int main(){

    return 0;
}