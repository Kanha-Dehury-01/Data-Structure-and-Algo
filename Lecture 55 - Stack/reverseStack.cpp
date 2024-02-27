#include <bits/stdc++.h>
using namespace std;

void pushAtBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
        return;
    }

    int prev = myStack.top();
    myStack.pop();

    pushAtBottom(myStack, x);

    myStack.push(prev);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int prev = stack.top();
    stack.pop();

    reverseStack(stack);

    pushAtBottom(stack, prev);
}

int main()
{

    return 0;
}