#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
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
            int temp ;
            cin>>temp;
            temp_row.push_back(temp);
        }
        arr.push_back(temp_row);
    }

    cout << "The 2D array is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Main logic
    for(int i =0;i<arr.size();i++){
        for(int j=0;j<=i;j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    for(int i =0;i<row;i++){
        reverse(arr[i].begin(),arr[i].end());
    }



    cout << "The 2D array is : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}