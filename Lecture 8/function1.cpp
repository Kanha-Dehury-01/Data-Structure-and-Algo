#include<bits/stdc++.h>
using namespace std;

int power(){
    int a,b;
    cout<<"Enter the number to find its power ";
    cin>>a;
    cout<<"Enter the power : ";
    cin>>b;
    int ans=1;

    for(int i=1;i<=b;i++){
        ans = ans * a;
    }

    return ans;

}

int main(){
    int ans = power();
    cout<<"Final answer is : "<<ans;
}