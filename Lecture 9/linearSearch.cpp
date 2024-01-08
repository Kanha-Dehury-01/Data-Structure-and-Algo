#include<bits/stdc++.h>
using namespace std;

void findArr(int arr[],int key,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element found";
            return;
        }
    }
    cout<<"Element not found";
    return;
}

int main(){
    int size,key;
    cout<<"Enter the size of an array";
    cin>>size;
    cout<<endl;

    int arr[size];
    cout<<"Enter element of array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to find : ";
    cin>>key;
    findArr(arr,key,size);
    
}