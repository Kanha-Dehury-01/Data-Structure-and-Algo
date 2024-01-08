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
    cout << endl;
    cout << endl;
}

void reverseTheArr(int*arr,int size ){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start++],arr[end--]);
    }
}

int main(){
    int size;
    cout << "Enter the size of the array :" << endl;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of Array :" << endl;
    inputArray(arr, size);

    reverseTheArr(arr,size);

    cout << "The reversed array is :" << endl;
    displayArray(arr, size);

    return 0;

}