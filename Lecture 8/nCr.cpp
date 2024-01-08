#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int ans =1;
    for(int i =n;i>0;i--){
        ans = ans *i;
    }
    return ans;
}


void findNCR(int n,int r){
    cout<< fact(n)/(fact(r)*fact(n-r))<<endl;
}


int main(){
    int n,r;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;

    cout<<"Enter r : ";
    cin>>r;
    cout<<endl;

    findNCR(n,r);
}