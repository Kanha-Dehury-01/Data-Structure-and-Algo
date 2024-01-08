#include <bits/stdc++.h>
using namespace std;

void reverseString(string &ch,int i){
    int s = 0;
    int e = i - 1;

    while (s < e)
    {
        swap(ch[s++], ch[e--]);
    }
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
    reverseString(ch,i);
    
    cout<<ch;
    return 0;
}