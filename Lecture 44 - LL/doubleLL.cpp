#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;


}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;

}

void insertAtMiddle(Node* &head, Node* &tail, int data,int pos){
    if (pos == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    else{
        Node *node1 = new Node(data);
        node1->next = temp->next;
        temp->next->prev = node1;
        node1->prev = temp;
        temp->next = node1;
    }
}

void deleteNode(Node* &head, Node* &tail, int pos)
{
    if (pos == 1)
    {
        Node *temp = head;
        head->next->prev = NULL;
        head = temp->next;
        delete temp;
        return;
    }
    else
    {
        Node *temp = head;
        int cnt = 1;

        while (cnt < pos - 1)
        {
            temp = temp->next;
            cnt++;
        }
        Node *curr = temp->next;
        if (curr->next == NULL)
        {
            tail = temp;
        }
        curr->prev = NULL;
        temp->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node* head){
    Node* temp = head;
        
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }    
    cout<<endl;
}


int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,20);
    insertAtHead(head,30);
    insertAtTail(tail,40);
    insertAtMiddle(head,tail,50,5);
    print(head);
    deleteNode(head,tail,5);
    print(head);

    cout<<"Head : "<<head->data<<"  "<<head->prev<<endl;
    cout<<"Tail : "<<tail->data<<"  "<<tail->next<<endl;

    return 0;
}