#include <bits/stdc++.h>
using namespace std;

void reverseString(string &a,int s,int e){
    if(s>e){
        return;
    }

    swap(a[s],a[e]);
    
    return reverseString(a,s+1,e-1);
}

int main(){
    string s = "abcde";

    reverseString(s,0,s.length()-1);
    cout<<s<<endl;

    return 0;
}