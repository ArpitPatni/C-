#include<iostream>
using namespace std;
int findFactorial(int n){
    int product=1;
    for(int i=1;i<=n;i++){
        product=product*i;
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int output=findFactorial(n);
    cout<<"Factorial of "<<n <<" is "<<output;
    return 0;
}