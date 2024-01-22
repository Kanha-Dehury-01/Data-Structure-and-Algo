#include <bits/stdc++.h>
using namespace std;

bool ifPalindrome(string &a, int s, int e)
{
    if (s > e)
    {
        return true;
    }

    if(a[s]!=a[e]){
        return false;
    }
    else{
     return ifPalindrome(a, s + 1, e - 1);

    }

}

int main()
{
    string s = "i";

    cout << "The string is " << (ifPalindrome(s, 0, s.length() - 1)? "palindrome":"not palindrome") << endl;

    return 0;
}