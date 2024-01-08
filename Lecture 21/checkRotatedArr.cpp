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

bool checkTheArray(int *arr, int size)
{
    int count =0;
    for (int i = 1; i < size; i++)
    {
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[0]<arr[size-1]){
        count++;
    }
    
    return (count <= 1);
}

int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr, size);

    cout << "The array is : ";
    if(checkTheArray(arr,size)){
        cout<<"The array is sorted and rotated"<<endl;
    }
    else{
        cout<<"The array is not sorted and rotated"<<endl;
        
    }
    

    return 0;
}