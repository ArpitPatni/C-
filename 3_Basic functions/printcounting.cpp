#include <iostream>
using namespace std;

// function
void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Please enter the value of n"<<endl;
    cin>>n;
    printCounting(n);
    return 0;
}