#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter a number : ";
    int a ;
    cin>>a;

    cout<<"Enter another number : ";
    int b;
    cin>>b;

    cout<<"Enter the operand (+ , - , / , *, %)";
    char op;
    cin>>op;

    switch (op)
    {

    case '+':
        cout << "The answer is : " << a + b << endl;
        break;
    case '-':
        cout << "The answer is : " << a - b << endl;
        break;
    case '*':
        cout << "The answer is : " << a * b << endl;
        break;
    case '/':
        cout << "The answer is : " << a / b << endl;
        break;
    case '%':
        cout << "The answer is : " << a % b << endl;
        break;

    default:
        break;
    }
}
