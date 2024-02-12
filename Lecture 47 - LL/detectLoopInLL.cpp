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

bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }

    map <Node*,bool> visited;

    Node*temp = head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        else{
        visited[temp]=true;
        temp=temp->next;
        }
    }
    return false;
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);

    // print(head);
    tail->next = head;
    if(detectLoop(head)){
        cout<<"Loop is detected "<<endl;
    }
    else{
        cout<<"No loop is detected "<<endl;
    }

    return 0;
}