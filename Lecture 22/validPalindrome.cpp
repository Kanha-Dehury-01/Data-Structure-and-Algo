#include <bits/stdc++.h> 
using namespace std;



void filterString(string &s,int size){
    
    int i=0;
    int j=0;

    while(j<size){
        if((s[j]>='a'&&s[j]<='z')|| (s[j]>='A'&& s[j]<='Z')|| (s[j]>='0'&& s[j]<='9')){
            s[i++]=s[j];
        }
        j++;
    }
    s[i]='\0';
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

bool ifPalindrome(string &ch,int i){
    int s=0;
    int e= i-1;

    while(s<e){
        if(ch[s]!=ch[e]){
            return false;
        }
        s++;
        e--;
    }

    return true;

}

int main(){
    string s;
    cout << "Enter the string " << endl;
    getline(cin,s);
    cout<<s<<endl;

    int size = s.size();
    filterString(s, size);
    cout<<s<<endl;
    toLowerCase(s, size);
    cout<<s<<endl;

    cout<<ifPalindrome(s, size)<<endl;

    return 0;
}