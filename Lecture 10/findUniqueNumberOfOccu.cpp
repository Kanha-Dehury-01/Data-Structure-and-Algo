#include<bits/stdc++.h>
using namespace std;

void printV(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

bool findUniqueOcc(vector<int>& arr){
    if(arr.size()==1){
        return true;
    }

    if(arr.size()==2){
        if(arr[0]==arr[1]){
            return true;
        }
        else{
            return false;
        }
    }
    sort(arr.begin(),arr.end());
    

    vector<int> occ;
    int count = 1;
    for(int i = 0 ;i<arr.size();i++){
        if ((i + 1 < arr.size()) && (arr[i] == arr[i + 1]))
        {
            count++;
            continue;
        }

            occ.push_back(count);
            count=1;
        
    }
    
    sort(occ.begin(),occ.end());
    

    for(int i = 0;i<occ.size();i++){
            if ((i + 1 < occ.size()) && (occ[i] == occ[i + 1]))
            {
            return false;
            }
    }

    return true;
}

int main(){
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(3);

    if(findUniqueOcc(arr)){
        cout<<"It has unique number of occurence";
    }
    else{
        cout<<"it doesn't have unique number of occurence ";
    }
}