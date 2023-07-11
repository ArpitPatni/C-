#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{50,40,14,1,2};
    int n=arr.size();


    //outer loop rounds
    for(int i=0;i<n-1;i++){
        int minIndex=i;

        //inner loop is finding index of minimum element from i to n
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
           minIndex=j;
        }

        swap(arr[i],arr[minIndex]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}