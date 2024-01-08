#include <bits/stdc++.h>
using namespace std;

int sizeString(string s){
    int i;
    while(s[i]!='\0'){
        i++;
    }

    return i;
}

void toUpperCase(string &s,int size){
    for(int i=0;i<size;i++){
        if(s[i]>='a' && (s[i]<='z')){
            s[i] = (s[i]-'a') + 'A';
        }
    }
}

void toLowerCase(string &s, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i] >= 'A' && (s[i] <= 'Z'))
        {
            s[i] = (s[i] - 'A') + 'a';
        }
    }
}

int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;

    int size = sizeString(s);

    // toUpperCase(s,size);
    toLowerCase(s,size);

    cout<<s;

    return 0;
}