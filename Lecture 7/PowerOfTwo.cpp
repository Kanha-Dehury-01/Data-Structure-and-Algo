#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if((n & (n-1) )==0){
        cout<<n<<" is power of two";
    }
    else
        cout << n << " is not power of two";

    return 0;
}