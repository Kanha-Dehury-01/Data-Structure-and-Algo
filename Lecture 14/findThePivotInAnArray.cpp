#include<bits/stdc++.h>
using namespace std;

void takeInput(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
}

int findPivot(int *arr , int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end -start)/2;

    if(arr[0]<arr[end]){
        return 0;
    }

    while(start < end){
        
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else {end = mid;}

        mid= start + (end -start)/2;

    }
    return start;
}

int main(){
    int size;
    cout << "Enter the size if the array" << endl;
    cin >> size;

    int arr[size];

    cout << "Enter the array element" << endl;
    takeInput(arr, size);
    cout << "The pivot is at index: " << findPivot(arr, size)
    << endl;
}