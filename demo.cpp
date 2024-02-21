#include <bits/stdc++.h>
using namespace std;

vector<int> mergeTwoArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> ans;
    int size1 = nums1.size();
    int size2 = nums2.size();

    int s1 = 0;
    int s2 = 0;

    while (s1 < size1 && s2 < size2)
    {
        if (nums1[s1] <= nums2[s2])
        {
            ans.push_back(nums1[s1++]);
        }
        else
        {
            ans.push_back(nums2[s2++]);
        }
    }

    while (s1 < size1)
    {
        ans.push_back(nums1[s1++]);
    }
    while (s2 < size2)
    {
        ans.push_back(nums2[s2++]);
    }
    return ans;
}

void displayArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << endl;
}

int main(){
    vector<int> nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(5);

    vector<int> nums2;
    nums2.push_back(2);
    
    vector<int> mergeArray = mergeTwoArray(nums1, nums2);
    displayArray(mergeArray);
}