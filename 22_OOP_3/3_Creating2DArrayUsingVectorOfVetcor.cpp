#include<iostream>
using namespace std;
int main(){
    vector<vector<int>>arr(6,vector<int>(5,0));

    for(int i=0;i<6;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}