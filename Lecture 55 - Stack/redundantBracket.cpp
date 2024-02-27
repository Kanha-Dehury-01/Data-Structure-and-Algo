#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s)
{
    stack<char> c;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '-' || ch == '+' || ch == '*' || ch == '/')
        {
            c.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isRedundant = true;

                while (c.top() != '(')
                {
                    char top = c.top();

                    if (top == '-' || top == '+' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }

                    c.pop();
                }
                if (isRedundant == true)
                {
                    return true;
                }
                c.pop();
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}