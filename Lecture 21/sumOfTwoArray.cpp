#include <bits/stdc++.h>
using namespace std;

vector<int> reverseAns(vector<int> &ans)
{
    int s = 0;
    int e = ans.size() - 1;

    while (s <= e)
    {
        swap(ans[s++], ans[e--]);
    }
    return ans;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;

    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int temp = a[i--] + b[j--] + carry;
        carry = temp / 10;
        temp = temp % 10;
        ans.push_back(temp);
    }

    // when first array > second
    while (i >= 0)
    {
        int temp = a[i--] + carry;
        carry = temp / 10;
        temp = temp % 10;
        ans.push_back(temp);
    }

    // when first array > second
    while (j >= 0)
    {
        int temp = b[j--] + carry;
        carry = temp / 10;
        temp = temp % 10;
        ans.push_back(temp);
    }

    // while(carry!=0){
    //     int temp = carry;

    //     carry = temp/10;
    //     ans.push_back(temp%10);
    // }

    if (carry != 0)
    {
        ans.push_back(carry);
    }

    reverseAns(ans);
    return ans;
}

int main(){


    return 0;
}