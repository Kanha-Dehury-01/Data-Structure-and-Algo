#include<bits/stdc++.h>
using namespace std;

void takeInput(int *arr,int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void binarySearch(int *arr,int size,int key){
    int start,end,mid;
    start = 0;
    end = size-1;
    mid = start + (end- start)/2;

    while(start<= end ){
        if(arr[mid]==key){
            cout<<"The element is found at "<<(mid+1)<<endl;
            return;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else start = mid+1;

        mid = start + (end-start)/2;
    }

    cout<<"Element not found !!!"<<endl;
    return ;
}

int main(){
    int size;
    cout<<"Enter the size if the array"<<endl;
    cin>>size;

    int arr[size];

    cout<<"Enter the array element"<<endl;
    takeInput(arr,size);

    cout<<"Enter the key to find inside array"<<endl;
    int key;
    cin>>key;

    binarySearch(arr,size,key);

    return 0;
}