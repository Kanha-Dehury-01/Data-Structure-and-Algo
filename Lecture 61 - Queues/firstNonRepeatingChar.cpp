#include <bits/stdc++.h>
using namespace std;


#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    string FirstNonRepeating(string A)
    {
        map<char, int> count;
        queue<char> q;
        string ans;

        for (int i = 0; i < A.length(); i++)
        {
            char curr = A[i];
            count[curr]++;
            q.push(curr);

            while (!q.empty())
            {
                if (count[q.front()] > 1)
                {
                    q.pop();
                }
                else
                {
                    ans.push_back(q.front());
                    break;
                }
            }
            if (q.empty())
            {
                ans.push_back('#');
            }
        }
        return ans;
    }
};

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string A;
        cin >> A;
        Solution obj;
        string ans = obj.FirstNonRepeating(A);
        cout << ans << "\n";
    }
    return 0;
}

