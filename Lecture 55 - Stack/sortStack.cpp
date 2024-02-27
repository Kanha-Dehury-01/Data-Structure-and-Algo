#include <bits/stdc++.h>
using namespace std;

void insertSort(stack<int> &s, int num)
{
    if (s.empty() || (s.top() <= num))
    {
        s.push(num);
        return;
    }
    int temp = s.top();
    s.pop();

    insertSort(s, num);
    s.push(temp);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int temp = stack.top();
    stack.pop();

    sortStack(stack);

    insertSort(stack, temp);
}

int main()
{

    return 0;
}