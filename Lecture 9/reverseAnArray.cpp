#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

void reverseArray(int arr[],int size){
    for(int i =0;i<(size/2);i++){
       swap(arr[i],arr[size-i-1]);
    }
    printArray(arr, size);
}



int main(){
    int size;
    cout<<"Enter the size of array";
    cout<<endl;
    cin>>size;

    int arr[size];
    for(int i = 0 ;i<size;i++){
        cin>>arr[i];
    }

    reverseArray(arr,size);

   
}