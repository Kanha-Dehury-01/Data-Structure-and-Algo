#include <bits/stdc++.h>
using namespace  std;

int main(){
    int n;
    cin>>n;
    
    long long int ans = 0;

    while(n!=0){
        int digit = n%10;
        if((ans*10)<INT_MIN || (ans*10)>INT_MAX){
            
            ans=0;
            break;
        }
        ans = ans*10 + digit;
        
         n = n/10;
    }

    cout<<ans;
    return 0;
}