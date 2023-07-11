#include<iostream>
using namespace std;
void checkSize(int arr[]){
    cout<<"Size inside function "<<sizeof(arr)<<endl;
}
int main(){
    int arr[10]={1,2,3,4};
    cout<<"Size inside main function "<<sizeof(arr)<<endl;
    checkSize(arr);
}