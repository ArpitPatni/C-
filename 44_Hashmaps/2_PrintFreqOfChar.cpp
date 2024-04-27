#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    string str="kdgkdgkhgdjhfja";
    unordered_map<char,int>mpp;
    for(int i=0;i<str.size();i++){
        mpp[str[i]]++;
    }

    for(auto i:mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    
}
