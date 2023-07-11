#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    cout<<"Your name is "<<str<<endl;
    cout<<"Length is "<<str.length()<<endl;
    cout<<"Empty or not  "<<str.empty()<<endl;
    str.push_back('A');
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<str.substr(0,5)<<endl;

    string a="love";
    string b="love";

    if(a.compare(b)==0){
        cout<<"a and b strings are exactly same"<<endl;
    }else{
        cout<<"a and b are not same "<<endl;
    }

    string sentence="This is my first message";
    string word="Arpit";

    sentence.replace(0,4,word);
    cout<<sentence<<endl;

    string str1="ABCDEFGH";
    cout<<str1.erase(0,4)<<endl;
    return 0;
}