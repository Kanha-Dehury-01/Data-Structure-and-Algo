#include <bits/stdc++.h>
using namespace std;

bool isSolution(int srcx, int srcy, vector<vector<int>> &m, vector<vector<int>> &visited, int n)
{
    if ((srcx >= 0 && srcx < n) && (srcy >= 0 && srcy < n) && m[srcx][srcy] == 1 & visited[srcx][srcy] == 0)
    {
        return true;
    }
    else
        return false;
}

void solve(vector<vector<int>> &m, vector<vector<int>> &visited, vector<string> &ans, string path, int srcx, int srcy, int n)
{
    // base case
    if (srcx == n - 1 && srcy == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[srcx][srcy] = 1;

    // Down
    int newx = srcx + 1;
    int newy = srcy;
    if (isSolution(newx, newy, m, visited, n))
    {
        path.push_back('D');
        solve(m, visited, ans, path, newx, newy, n);
        path.pop_back();
    }

    // Up
    newx = srcx - 1;
    newy = srcy;
    if (isSolution(newx, newy, m, visited, n))
    {
        path.push_back('U');
        solve(m, visited, ans, path, newx, newy, n);
        path.pop_back();
    }
    // Left
    newx = srcx;
    newy = srcy - 1;
    if (isSolution(newx, newy, m, visited, n))
    {
        path.push_back('L');
        solve(m, visited, ans, path, newx, newy, n);
        path.pop_back();
    }
    // Right
    newx = srcx;
    newy = srcy + 1;
    if (isSolution(newx, newy, m, visited, n))
    {
        path.push_back('R');
        solve(m, visited, ans, path, newx, newy, n);
        path.pop_back();
    }

    visited[srcx][srcy] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;
    string path = "";

    if (m[0][0] == 0)
    {
        return ans;
    }

    int srcx = 0;
    int srcy = 0;

    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    solve(m, visited, ans, path, srcx, srcy, n);
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
+

    return 0;
}