#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void printDigits(int n){
    if(n==0){
        return;
    }
    int digit=n%10;
    printDigits(n/10);
     cout<<digit<<endl;
    
    
}
int main(){
    int n;
    cin>>n;
    printDigits(n);
    return 0;
}
