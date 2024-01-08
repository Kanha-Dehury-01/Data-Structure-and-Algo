#include <bits/stdc++.h>
using namespace std;

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
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

vector<int> rotateTheArray(int *arr, int size,int k)
{
    vector<int> ans(size);
    for (int i = 0; i < size; i++)
    {
        ans[(i+k)%size] = arr[i];
    }
    return ans;
}

int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr, size);

    int k;
    cout<<"Enter the place to shift"<<endl;
    cin>>k;

    

    cout << "The rotated array is :" << endl;
    displayArray(rotateTheArray(arr, size,k));

    return 0;
}