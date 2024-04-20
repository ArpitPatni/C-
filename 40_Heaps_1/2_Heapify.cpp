#include<iostream>
using namespace std;
void heapify(int arr[],int n ,int i){
    int index=i;
    int leftIndex=2*i;
    int rightIndex=2*i+1;
    int largest=index;
    if(leftIndex<=n && arr[largest]<arr[leftIndex]){
        largest=leftIndex;
    }
    if(rightIndex<=n && arr[largest]<arr[rightIndex]){
        largest=rightIndex;
    }
    if(index!=largest){
        //left ya right child se koi greater hogaya
        swap(arr[index],arr[largest]);
        index=largest;
        heapify(arr,n,index);
    }
}
void buildHeap(int arr[],int n){
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
}
void heapSort(int arr[],int n){
    while(n!=1){
        swap(arr[1],arr[n--]);
        heapify(arr,n,1);
    }
}
int main(){

}