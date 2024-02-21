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

Node *getLength(Node *head)
{

    Node *fast = head;
    Node *slow = head;

    if (fast->next->next == NULL)
    {
        return slow;
    }

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next;
        if(fast->next!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }

    return slow;
}

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *forw = curr->next;

    while (curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    head = prev;
    return head;
}

bool isPalindrome(Node *head)
{
    if (head->next == NULL)
    {
        return true;
    }

    Node *middle = getLength(head);
    cout<<middle->data<<endl;

    Node *temp = middle;
    Node *h2 = reverse(temp);
    temp = h2;
    Node *h1 = head;

    while (h2 != NULL)
    {
        if (h1->data != h2->data)
        {
            return false;
        }
        else if (h2->next == NULL)
        {
            break;
        }
        else
        {
            h1 = h1->next;
            h2 = h2->next;
        }
    }
    reverse(temp);

    return true;
}

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

int main(){
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,2);
    // insertAtTail(tail,3);
    // insertAtTail(tail,1);
    insertAtTail(tail,1);
    insertAtTail(tail,1);

    print(head);

    if(isPalindrome(head)){
        cout<<"THE LINKED LIST IS PALINDROME"<<endl;
    }
    else{
        cout<<"THE LL IS NOT PALINDROME"<<endl;
    }


    return 0;
}