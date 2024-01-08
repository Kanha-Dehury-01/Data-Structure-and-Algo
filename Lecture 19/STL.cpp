#include <bits/stdc++.h>
using namespace std;

int main(){

    int row, col;
    cout << "Enter the size of row and col :" << endl;
    cin >> row;
    cin >> col;
    vector<vector<int>> arr;

    cout << "Enter the element of 2D array :" << endl;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp_row;
        for (int j = 0; j < col; j++)
        {
            int temp;
            cin >> temp;
            temp_row.push_back(temp);
        }
        arr.push_back(temp_row);
    }
    
    // cout<<arr.front()<<endl;
    // cout<<arr.back()<<endl;
   cout<<arr.size()<<endl;

}