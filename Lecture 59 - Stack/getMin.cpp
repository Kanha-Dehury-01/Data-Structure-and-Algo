#include <bits/stdc++.h>
using namespace std;

class SpecialStack
{
public:
    stack<int> s;
    int mini;

    void push(int data)
    {
        if (s.empty())
        {
            s.push(data);
            mini = data;
            return;
        }

        if (data < mini)
        {
            int val = 2 * data - mini;
            s.push(val);
            mini = data;
        }
        else
        {
            s.push(data);
        }
    }

    void pop()
    {
        if (s.empty())
        {
            return;
        }
        int curr = s.top();
        s.pop();

        if (mini > curr)
        {
            int val = 2 * mini - curr;
            mini = val;
        }
    }

    int top()
    {
        if (s.empty())
        {
            return -1;
        }
        int curr = s.top();
        if (mini > curr)
        {
            return mini;
        }
        else
        {
            return curr;
        }
    }

    int getMin()
    {
        if (s.empty())
        {
            return -1;
        }

        return mini;
    }
};

int main()
{

    return 0;
}