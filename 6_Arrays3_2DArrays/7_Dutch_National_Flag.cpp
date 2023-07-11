#include<iostream>
using namespace std;
void moveAllNegativeNumbersToLeft(int *arr,int  n){
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]<0){
            l++;
        }else if(arr[h]>0){
            h--;
        }else{
            swap(arr[l],arr[h]);
        }
    }
}
int main(){
    int arr[]={-1,2,-3,4,-5,13,15,14};
    int n=sizeof(arr)/sizeof(int);
    moveAllNegativeNumbersToLeft(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}