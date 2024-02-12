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

int getLength(Node *head)
{
    int ans = 0;
    while (head != NULL)
    {
        ans++;
        head = head->next;
    }
    return ans;
}

Node *findMiddle(Node *head)
{
    int length = getLength(head);

    int cnt = 0;
    Node *temp = head;
    while (cnt < (length / 2))
    {
        temp = temp->next;
        cnt++;
    }

    return temp;
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
    Node* node1=new Node(10);
    Node* node2=new Node(20,node1);
    Node* node3=new Node(30,node2);
    Node* node4=new Node(40,node3);
    Node* head= node4;

    print(head);

    cout<<"The Middle of LL : "<<findMiddle(head)->data<<endl;


    return 0;
}