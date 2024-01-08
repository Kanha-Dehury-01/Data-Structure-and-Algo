#include <bits/stdc++.h>
using namespace std;

void inputArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout<<endl;
    cout<<endl;
}
void insertionSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
        
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

    insertionSort(arr, size);

    cout << "The sorted(Insertion) array is :" << endl;
    displayArray(arr, size);
    return 0;
}