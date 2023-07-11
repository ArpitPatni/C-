#include<iostream>
using namespace std;
void update(int*p){
    *p=*p+10;
}
int main(){
    int a=5;
    int *ptr=&a;
    update(ptr);
    cout<<a<<endl;
}