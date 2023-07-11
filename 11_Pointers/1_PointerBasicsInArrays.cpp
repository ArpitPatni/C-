#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    cout<<arr[0]<<endl;
    cout<<&arr[0]<<endl;
    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr)+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;

    int* ptr=arr;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

}