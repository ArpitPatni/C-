#include<iostream>
using namespace std;
bool isPalindrome(string &s,int start,int end){
    if(start>=end){
        return true;
    }

    if(s[start]!=s[end]){
        return false;
    }
    return isPalindrome(s,start+1,end-1);
}
int main(){
    string s;
    cout<<"Enter the value of string"<<endl;
    cin>>s;
    int ans=isPalindrome(s,0,s.size()-1);
    if(ans==1){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}