#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int i=0;
    cout<<arr[i]<<endl;
    cout<<i[arr]<<endl;
    cout<<*(arr+i)<<endl;

    cout<<sizeof(arr)<<endl;
    int* ptr=arr;
    cout<<sizeof(ptr)<<endl;
}