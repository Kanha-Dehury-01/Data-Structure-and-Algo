#include <bits/stdc++.h>
using namespace std;

void solve(string str, string output, vector<string> &ans, int index)
{
    if (index >= str.length())
    {
        if (output.length() > 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude case
    solve(str, output, ans, index + 1);

    // include case
    output.push_back(str[index]);
    solve(str, output, ans, index + 1);
}

vector<string> subsequences(string str)
{

    vector<string> ans;
    string output = "";
    int index = 0;
    solve(str, output, ans, index);
    return ans;
}

void print(vector<string> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    string str = "aaa";
    print(subsequences(str));

    return 0;
}