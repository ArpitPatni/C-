#include<iostream>
using namespace std;
void lastOccuranceLeftToRight(string& s,char x,int i,int& ans){
    if(i<0){
        return;
    }
    if(s[i]==x){
        ans=i;
        return;
    }
    lastOccuranceLeftToRight(s,x,i-1,ans);
}
int main(){
    string s;
    char x;
    cout<<"Enter the value of string"<<endl;
    cin>>s;
    cout<<"Enter the value of character "<<endl;
    cin>>x;
    int ans=-1;
    int i=s.size()-1;
    lastOccuranceLeftToRight(s,x,i,ans);
    cout<<"Ans is "<<ans<<endl;
    return 0;

}