#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>mpp;
    //1st way of inserting in map
    pair<string,int>p=make_pair("scorpio",10);
    mpp.insert(p);
    //2nd way of inserting in map
    mpp.insert({"hello",20});

    mpp["fortuner"]=30;

    cout<<mpp.at("hello")<<endl;
    //search in a map
    //first way
    cout<<mpp.count("scorpio")<<endl;

    //second way
    if(mpp.find("fortuner")!=mpp.end()){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }

    cout<<"printing all values in map"<<endl;
    for(auto i:mpp){
        cout<<i.first<<"->"<<i.second<<endl;
    }

}
