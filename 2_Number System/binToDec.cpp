#include<iostream>
#include<cmath>
using namespace std;
int BinaryToDecimalConversion(int n){
    int sum=0;
    int i=0;
    while(n){
        int bit=n%10;
        sum=sum+bit*pow(2,i++);
        n/=10;
    }
   return sum;
}

int main(){
    int  n;
    cin>>n;
    int decimalNum=BinaryToDecimalConversion(n);
    cout<<decimalNum<<endl;
    return 0;
}