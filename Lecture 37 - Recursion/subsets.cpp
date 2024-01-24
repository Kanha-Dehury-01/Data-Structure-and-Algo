#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums,vector<int> output,vector<vector<int>> &ans ,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums,output,ans,index+1);

        //include
        output.push_back(nums[index]);
        solve(nums,output,ans,index+1);
    }

    void print(vector<vector<int>> ans){
        for(int i=0;i<ans.size();i++){

            
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }

        int main()
    {
        vector<int> nums = {1, 2, 3};
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, ans, index);
        print(ans);

        return 0;
    }