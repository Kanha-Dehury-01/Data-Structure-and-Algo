#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int>> &M, int n)
    {
        stack<int> s;

        for (int i = 0; i < n; i++)
        {
            s.push(i);
        }

        while (s.size() != 1)
        {
            int A = s.top();
            s.pop();
            int B = s.top();
            s.pop();

            if (M[A][B] == 1)
            {
                s.push(B);
            }
            else
            {
                s.push(A);
            }
        }

        int A = s.top();
        for (int i = 0; i < n; i++)
        {
            if (M[A][i] != 0)
            {
                return -1;
            }
            if (A != i && M[i][A] != 1)
            {
                return -1;
            }
        }

        return A;
    }
};

int main(){


    return 0;
}