#include<iostream>
using namespace std;
void solve(int& val){
    val++;
    //val is pointing to same memory location of a
}
int main(){
    int a=5;
    solve(a);
    cout<<a<<endl;
    return 0;
}