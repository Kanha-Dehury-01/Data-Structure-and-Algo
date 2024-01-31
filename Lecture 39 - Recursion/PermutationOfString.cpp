#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, vector<vector<int>> &ans, int index)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    // Process Part
    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        // recursive part
        solve(nums, ans, index + 1);
        // backtrack
        swap(nums[i], nums[index]);
    }
}

void print (vector<vector<int>> ans){
    for(int i =0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);
    print(ans);
    return 0;
}