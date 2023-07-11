#include<iostream>
using namespace std;
int binarySearch(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }else if(target<arr[mid]){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int size=8;
    int target=16;

    int indexOfTarget=binarySearch(arr,size,target);
    
    if(indexOfTarget==-1){
        cout<<"target not found"<<endl;
    }else{
        cout<<"Target found at "<<indexOfTarget<<" index"<<endl;
    }
    return 0;
}