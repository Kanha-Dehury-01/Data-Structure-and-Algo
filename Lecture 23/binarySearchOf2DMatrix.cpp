#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = (row * col) - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (target == element)
        {
            return true;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return false;
}

int main (){
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
    int target;
    cout<<"Enter the target number : "<<endl;
    cin>>target;
    
    //Logic Begins
    if(searchMatrix(arr,target)){
        cout<<"Target is found "<<endl;
    }
    else{
        cout<<"Target is missing"<<endl;
    }


}