#include <bits/stdc++.h>
using namespace std;


int main(){
    string str = "kanha";

    stack<char> s;
    
    for(int i =0;i<str.length();i++){
        s.push(str[i]);
    }

    for(int i=0;i<str.length();i++){
        str[i]=s.top();
        s.pop();
    }

    cout<<str<<endl;


    return 0;
}