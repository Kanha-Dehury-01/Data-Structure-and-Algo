#include<bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter the size of array "<<endl;
    cin>>size;
    cout<<endl;

    int arr[size];
    cout<<"Enter the elements :"<<endl;
    int ans = 0;
    for(int i=0;i<size;i++){
        cin>>arr[i];
        ans = ans + arr[i];
    }

    cout<<"The sum of array : "<<ans<<endl;

}