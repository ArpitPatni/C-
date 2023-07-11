#include<iostream>
#include<string.h>
using namespace std;
bool compareString(string a,string b){
    if(a.length()!=b.length()){
        return false;
    }else{
        for(int i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                return false;
            }
        }
    }
    return true;
}
int main(){
    string a;
    string b;
    cin>>a>>b;

    if(compareString(a,b)){
        cout<<"Strings are same"<<endl;
    }else{
        cout<<"Strings are not same"<<endl;
    }

    string x="bbcd";
    string y="acda";

    //if a is greater than b then it will return 1 else it will return -1
    cout<<x.compare(y)<<endl;


    string sentence="Hello ji kaise ho ";
    string target="Everyone";

    if(sentence.find(target)==string::npos){
        cout<<"Not Found"<<endl;
    }
}