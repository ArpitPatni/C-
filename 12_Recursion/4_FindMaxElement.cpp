#include<bits/stdc++.h>
using namespace std;
void findMaxElement(int arr[],int n,int i,int& maxElement){
    if(i>=n){
        return;
    }

    if(arr[i]>maxElement){
        maxElement=arr[i];
    }
    findMaxElement(arr,n,i+1,maxElement);
}
int main(){
    int arr[5]={10,50,22,44,66};
    int n=5;
    int i=0;
    int maxElement=INT_MIN;
    findMaxElement(arr,n,i,maxElement);
    cout<<"Maximum Element is "<<maxElement<<endl;
    return 0;
}