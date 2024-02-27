#include <bits/stdc++.h>
using namespace std;

int findMinimumCost(string str)
{
    if (str.length() % 2 != 0)
    {
        return -1;
    }
    stack<char> stc;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == '{')
        {
            stc.push(ch);
        }
        else
        {
            if (!stc.empty() && stc.top() == '{')
            {
                stc.pop();
            }
            else
            {
                stc.push(ch);
            }
        }
    }

    int cb = 0; // count for closing braces
    int ob = 0; // count for opening braces
    while (!stc.empty())
    {
        char top = stc.top();
        if (top == '{')
            ob++;
        else
            cb++;

        stc.pop();
    }
    return ((ob + 1) / 2 + (cb + 1) / 2);
}

int main()
{

    return 0;
}