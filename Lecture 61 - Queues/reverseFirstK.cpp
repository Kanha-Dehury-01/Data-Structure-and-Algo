#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k)
    {
        stack<int> s;
        for (int i = 0; i < k; i++)
        {
            int num = q.front();
            q.pop();
            s.push(num);
        }

        for (int i = 0; i < k; i++)
        {
            q.push(s.top());
            s.pop();
        }

        for (int i = 0; i < (q.size() - k); i++)
        {
            int val = q.front();
            q.pop();
            q.push(val);
        }

        return q;
    }
};

int main()
{

    return 0;
}