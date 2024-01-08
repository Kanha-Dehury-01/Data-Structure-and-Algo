#include<bits/stdc++.h>
using namespace std;

void takeInput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

pair<int, int> firstAndLastPosition(int *arr, int n, int k)
{
    pair<int, int> ans;
    ans.first = -1;
    ans.second = -1;

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    // for finding the first  occurance of the element

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans.first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    // for finding the last occurance of the element
    start = 0;
    end = n - 1;
    mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            ans.second = mid;
            start = mid + 1;
        }
        else if (arr[mid] > k)
        {
            end = mid - 1;
        }
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }

    return ans;
}

int main(){
    int size;
    cout << "Enter the size if the array" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the array element" << endl;
    takeInput(arr, size);

    cout << "Enter the key to find inside array" << endl;
    int key;
    cin >> key;

    pair<int,int> ans = firstAndLastPosition(arr, size, key);

    cout<<"The first occurance of array is at : "<<ans.first<<" & last occurance is at : "<<ans.second<<endl;

    return 0;
}