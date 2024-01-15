#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    int count = 0;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            for (int j = 2 * i; j < n; j = j + i)
            {
                prime[j] = false;
            }
        }
    }
    return count;
}

int main(){
    int number;
    cout<<"Enter the number to find prime number count : "<<endl;
    cin>>number;
    cout<<endl;

    cout<<"Number of prime number upto "<<number<<" is :"<< countPrimes(number)<<endl;
}