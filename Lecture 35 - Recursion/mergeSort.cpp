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

void merge2Array(int *arr,int start,int end ,int mid){
    int size = end-start+1;
    int len1 = mid+1;
    int len2 = end+1 ;
    int s1 = start;
    int s2 = mid+1;

    int *arr1 = new int[size];
    int mainIndex = 0;
    while(s1<len1 && s2<len2){
        if(arr[s1]>arr[s2]){
            arr1[mainIndex++] = arr[s2++];
        }
        else{
            arr1[mainIndex++] = arr[s1++];
        }
    }
    //first array is bigger
    while (s1 < len1)
    {
        arr1[mainIndex++] = arr[s1++];
    }

    //second array is bigger
    while (s2 < len2)
    {
        arr1[mainIndex++] = arr[s2++];
    }

    for(int i =0;i<size;i++){
        arr[start++]= arr1[i];
    }
    delete []arr1;
}

void mergeSort(int *arr,int start,int end){
    //base case
    if(start>=end){
        return;
    }

    //find mid
    int mid = start + (end-start)/2;

    //sort left part
    mergeSort(arr,start,mid);
 
    //sort right part
    mergeSort(arr,mid+1,end);

    merge2Array(arr,start,end,mid);
}

int main(){
    int arr[7] = {2,1,6,8,3,7,5};
    
    displayArray(arr,7);
    mergeSort(arr,0,6);

    cout<<"Sorted array is : "<<endl;
    displayArray(arr,7);

    return 0;
}