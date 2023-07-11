#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool cmp(char first,char second){
    return first>second;
}
bool compare(int a,int b){
    return a>b;
}
int main(){
    string s="babbar";
    sort(s.begin(),s.end(),cmp);
    cout<<s<<endl;

    vector<int>arr{1,5,2,4,3};

    sort(arr.begin(),arr.end(),compare);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    vector<int> arr1{7,6,5,4,3,2};
    for(auto val:arr1){
        cout<<val<<" ";
    }
    return 0;
}