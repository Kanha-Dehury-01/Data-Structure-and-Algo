#include<bits/stdc++.h>
using namespace std;

void findUnique(int arr[], int size){
    if(size==1){
        cout<<arr[0]<<" is the unique element "<<endl;
        return;
    }
    if(size==2){
        if(arr[0]==arr[1]){
            cout<<"No unique element "<<endl;
            return;
        }
        else{
            cout<<"Both are unique "<<endl;
            return;
        }
    }

    int ans = arr[0]^arr[1];

    for(int i = 2;i<size;i++){
        ans = ans^arr[i];
    }

    cout<<ans<<" is the unique element of the array "<<endl;

    
}

int main(){
    int size;
    cout<<"Enter the size of array";
    cin>>size;
    cout<<endl;

    int arr[size];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    findUnique(arr,size);

}