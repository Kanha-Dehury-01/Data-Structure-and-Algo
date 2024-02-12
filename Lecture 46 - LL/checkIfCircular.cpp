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

bool isCircular(Node* head){
    if(head==NULL){
        return true;
    }

    Node* temp = head->next;
    while(head!=temp && temp!=NULL){
        temp=temp->next;
    }
    if(head==temp){
        return true;
    }

    return false;
}

bool isCircularMap(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    map<Node *, bool> visited;

    Node *temp = head->next;
    while (head != temp && temp != NULL)
    {
        visited[temp]= true;
        temp = temp->next;
        if(visited[temp]==true){
            return false;
        }

    }
    if (head == temp)
    {
        return true;
    }

    return false;
}

int main(){
    Node *tail = NULL;
     insertNode(tail, 10);
    Node*head = tail;
     
     print(tail);


    if(isCircularMap(head)){
        cout << "Linked list is cicular" << endl;
    }
    else{
        cout << "Linked list is not cicular" << endl;
    }


    return 0;
}