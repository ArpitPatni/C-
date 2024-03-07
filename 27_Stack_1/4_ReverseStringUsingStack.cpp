#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str="arpit";

    stack<char> s;
    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    return 0;
}
