#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }

    return a;
}

int main(){
    int a,b;

    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<endl;

    cout<<"Enter the second number :"<<endl;
    cin>>b;
    cout<<endl;

    cout<<"The GCD of two number "<<a<<" & "<<b<<" is :"<<GCD(a,b)<<endl;
    return 0;
}