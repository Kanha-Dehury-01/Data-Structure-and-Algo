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

Node *solve(Node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return NULL;
    }

    // sorting k nodes
    Node *prev = NULL;
    Node *curr = head;
    Node *forw = NULL;
    int cnt = 0;

    while (cnt < k && curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
        cnt++;
    }

    if (forw != NULL)
    {
        if (k > getLength(curr))
        {
            head->next = forw;
        }
        else
        {
            head->next = solve(forw, k);
        }
    }

    return prev;
}

Node *kReverse(Node *head, int k)
{
    return solve(head, k);
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
    Node *node6 = new Node(60, node5);
    Node *head = node6;

    int k = 4;
    print(head);

    head = kReverse(head,k);
    print(head);

    return 0;
}