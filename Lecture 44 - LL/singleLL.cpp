#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node* &head,Node* &tail,int data,int pos){

    if(pos==1){
        insertAtHead(head,data);
        return;
    }

    
    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,data);
        return ;
    }

    Node* node1 = new Node(data);
    node1->next = temp->next; 
    temp->next = node1;

}

void deleteNode(Node* &head , Node* &tail,int pos){
    if(pos == 1){
        Node* temp = head;
        head = temp->next;
        delete temp;
        return;
    }
    else{
        Node*temp = head;
        int cnt=1;
        
        while(cnt<pos-1){
            temp = temp->next;
            cnt++;
        }
        Node* curr = temp->next;
        if(curr->next == NULL){
            tail = temp;
        }
        temp->next = curr->next;
        delete curr;
        

    }
    
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"  ";
        temp = temp->next;
    }
    
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head,20);
    print(head);

    insertAtHead(head,30);
    print(head);

    insertAtTail(tail,40);
    print(head);

    insertAtMiddle(head,tail,50,1);
    print(head);
    
    insertAtMiddle(head,tail,60,5);
    print(head);
 
    deleteNode(head,tail,6);
    print(head);
    
    insertAtTail(tail,70);
    print(head);

    cout<<"Head  : "<<head->data<<"  "<<head->next<<endl;
    cout<<"Tail  : "<<tail->data<<"  "<<tail->next<<endl;
    

    return 0;
}