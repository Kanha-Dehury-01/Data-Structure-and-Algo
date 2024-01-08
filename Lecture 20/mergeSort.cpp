#include <bits/stdc++.h>
using namespace std;

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << endl;
}

vector<int> mergeSort(int* arr1,int*arr2,int size1,int size2){
    int first = 0;
    int second = 0;
    vector<int> ans;
    while (first<size1 && second<size2){
        if(arr1[first]<arr2[second]){
            ans.push_back(arr1[first++]);
        }
        else if(arr1[first]==arr2[second]){
            ans.push_back(arr1[first++]);
            ans.push_back(arr2[second++]);
            
        }
        else{
            ans.push_back(arr2[second++]);
        }
    }

    // if arr1 > arr2

    while(first<size1){
        ans.push_back(arr1[first++]);
    }

    // if arr2>arr1

    while(second<size2){
        ans.push_back(arr2[second++]);
    }

    return ans;
}

int main()
{
    int size1;
    cout << "Enter the size of the array 1:" << endl;
    cin >> size1;
    int size2;
    cout << "Enter the size of the array 2:" << endl;
    cin >> size2;

    int arr1[size1];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr1, size1);
    int arr2[size2];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr2, size2);

    vector<int> ans = mergeSort(arr1,arr2,size1,size2);

    cout << "The merged array is :" << endl;
    displayArray(ans, ans.size());

    return 0;
}