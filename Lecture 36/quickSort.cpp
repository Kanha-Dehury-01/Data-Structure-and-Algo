#include <bits/stdc++.h>
using namespace std;

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << endl;
}

int partition(int *arr,int start,int end){
    int pivot = arr[start];
    int count = 0;
    
    for(int i =start+1;i<=end;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex = count+start;
    swap(arr[start],arr[pivotIndex]);

    int i = start;
    int j = end;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int *arr,int start,int end){
    //base case
    if(start>=end){
        return;
    }

    cout<<"p"<<endl;
    int p = partition(arr,start,end);
    quickSort(arr,start,p-1);

    quickSort(arr,p+1,end);
}

int main(){
    int arr[6] = { 6,1,5,2,3,8};
    int arr1[5] = {4,2,5,1,3};

    quickSort(arr1, 0, 4);

    displayArray(arr1,5);

    return 0;
}