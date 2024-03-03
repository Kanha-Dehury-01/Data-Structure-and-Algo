#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void solve(queue<int> &q)
    {
        if (q.empty())
        {
            return;
        }

        int num = q.front();
        q.pop();

        solve(q);
        q.push(num);
    }

public:
    queue<int> rev(queue<int> q)
    {
        solve(q);
        return q;
    }
};

int main()
{

    return 0;
}