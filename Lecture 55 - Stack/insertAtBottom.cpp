#include<bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return myStack;
    }

    int prev = myStack.top();
    myStack.pop();
    pushAtBottom(myStack, x);

    myStack.push(prev);
    return myStack;
}

int main(){


    return 0;
}