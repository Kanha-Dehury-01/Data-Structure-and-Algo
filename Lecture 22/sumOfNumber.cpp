#include <bits/stdc++.h>
using namespace std;

string stringSum(string &num1, string &num2)
{
    int size1 = num1.length() - 1;
    int size2 = num2.length() - 1;
    string output = "";
    int carry = 0;
    cout<<"OKay"<<size1<<size2<<endl;
    while (0 <= size1 && 0 <= size2)
    {
        int digit1 = num1[size1] - '0';
        int digit2 = num2[size2] - '0';

        int sum = (digit1 + digit2 + carry) % 10;
        carry = (digit1 + digit2 + carry) / 10;
        output.push_back((sum + '0'));
        size1--;
        size2--;
    }

    while (0 <= size1)
    {
        int digit1 = num1[size1] - '0';
        int sum = (digit1 + carry) % 10;
        carry = (digit1 + carry) / 10;
        output.push_back((sum + '0'));
        size1--;
    }
    while (0 <= size2)
    {
        int digit2 = num2[size2] - '0';
        int sum = (digit2 + carry) % 10;
        carry = (digit2 + carry) / 10;
        output.push_back((sum + '0'));
        size2--;
    }
    while (carry > 0)
    {
        int sum = carry % 10;
        carry = carry / 10;
        output.push_back((sum + '0'));
    }
    return output;
}

int main(){

    string num1 = "99";
    string num2 = "99";

    cout<<"String sum : "<<stringSum(num1,num2)<<" ok " <<endl;

    return 0;
}