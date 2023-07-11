#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int  maxNumber=INT_MIN;

    int arr[]={5,7,8,9,18,20};
    int size=6;

    for(int i=0;i<size;i++){
        if(arr[i]>maxNumber){
            maxNumber=arr[i];
        }
    }

    cout<<"Maximum no is "<<maxNumber<<endl;
    return 0;

}