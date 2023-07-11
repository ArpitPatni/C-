#include<bits/stdc++.h>
using namespace std;
int checkIfPresent(string& str,char& target,int i,int& count){
    if(i>=str.length()){
        return -1;
    }
    if(str[i]==target){
        count++;
        // ans.push_back(i);
    }
    return checkIfPresent(str,target,i+1,count);
}
int main(){
    string str="arpitap";
    char target='p';
    int i=0;
    int count=0;
    // vector<int>ans;
    checkIfPresent(str,target,i,count);
    // cout<<"Characters are present at "<<endl;
    // for(auto val:ans){
    //     cout<<val<<" ";
    // }
    cout<<"Count is "<<count<<endl;
    return 0;
}