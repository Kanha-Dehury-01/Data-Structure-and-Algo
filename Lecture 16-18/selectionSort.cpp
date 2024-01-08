#include <bits/stdc++.h>
using namespace std;


void inputArray(int *arr , int size){
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
}

void selectionSort(int *arr, int size){
    for(int i = 0;i<size;i++){
        int minindex = i;
        for(int j = i+1;j<size;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

void displayArray(int *arr,int size){
    for (int i = 0; i < size; i++){
        cout <<  arr[i] <<"  ";
    }
}


int main(){
    int size;
    cout<<"Enter the size of the array :"<<endl;
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of Array :"<<endl;
    inputArray(arr,size);

    selectionSort(arr,size);

    cout<<"The sorted(Selection) array is :"<<endl;
    displayArray(arr,size);
    return 0;
}