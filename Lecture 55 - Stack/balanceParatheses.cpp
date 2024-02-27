#include<bits/stdc++.h>
#include <stack>
bool isValidParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch == '[' || ch == '(' || ch == '{')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char t = st.top();
                if ((ch == '}' && ch == t) ||
                    (ch == ')' && ch == t) ||
                    (ch == ']' && ch == t))
                {
                    st.pop();
                }
            }
        }
    }
    if (st.empty())
        return true;
    else
        return false;
}

int main(){
    
}