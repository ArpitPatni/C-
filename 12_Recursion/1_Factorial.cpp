#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}