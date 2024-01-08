#include <bits/stdc++.h>
using namespace std;

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void bubbleSort(int *arr, int size)
{
    for(int i = 0;i<size;i++){
        for(int j =0;j<size-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr, size);

    bubbleSort(arr, size);

    cout << "The sorted(Bubble) array is :" << endl;
    displayArray(arr, size);
    return 0;
}