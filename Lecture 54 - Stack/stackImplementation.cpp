#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;

    Stack(int data)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack is full"<<endl;
        }
    }
    bool empty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    void pop(){
        if(!empty()){
            top--;
        }
        else{
            cout<<"Stack is empty!"<<endl;
        }
    }
    int peek(){
        if(!empty()) return arr[top];
        else return -1;
    }
};

int main()
{
    Stack s(10);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout<<"Top element is "<<s.peek()<<endl;

    return 0;
}