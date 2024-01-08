#include <bits/stdc++.h>
using namespace std;

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

int main()
{
    string ch;
    cout << "Enter the string " << endl;
    cin >> ch;

    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    if (ifPalindrome(ch, i)){
        cout<<"String is a palindrome";
    }
    else{
        cout<<"Not a palindrome";
    }

        cout << ch;
    return 0;
}