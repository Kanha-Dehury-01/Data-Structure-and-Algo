#include <bits/stdc++.h>
using namespace std;

void takeInput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int peakIndexInMountainArray(int *arr,int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid - 1] < arr[mid] && arr[mid + 1] < arr[mid])
        {
            return mid;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            end = mid;
        }
        else if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    int size;
    cout << "Enter the size if the array" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the array element" << endl;
    takeInput(arr, size);

    cout<<"The peak indexfound at position"<<peakIndexInMountainArray(arr,size)<<endl;
    
}