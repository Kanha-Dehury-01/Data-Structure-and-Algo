#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = col - 1;

    while (start < row && end >= 0)
    {
        int curr_num = matrix[start][end];
        if (curr_num == target)
        {
            return true;
        }
        else if (target < curr_num && (end - 1) >= 0)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return false;
}

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
    int target;
    cout << "Enter the target number : " << endl;
    cin >> target;

    // Logic Begins
    if (searchMatrix(arr, target))
    {
        cout << "Target is found " << endl;
    }
    else
    {
        cout << "Target is missing" << endl;
    }
}