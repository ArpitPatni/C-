#include<iostream>
using namespace std;
void lastOccuranceLeftToRight(string& s,char x,int i,int& ans){
    if(i>=s.size()){
        return;
    }
    if(s[i]==x){
        ans=i;
    }
    lastOccuranceLeftToRight(s,x,i+1,ans);
}
int main(){
    string s;
    char x;
    cout<<"Enter the value of string"<<endl;
    cin>>s;
    cout<<"Enter the value of character "<<endl;
    cin>>x;
    int ans=-1;
    int i=0;
    lastOccuranceLeftToRight(s,x,i,ans);
    cout<<"Ans is "<<ans<<endl;
    return 0;

}