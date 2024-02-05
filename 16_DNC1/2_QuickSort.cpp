#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //step 1 choose pivot element
    int pivotIndex=s;
    int pivotElement=arr[s];

    //step 2 find right position for pivot element and place it there;

    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivotElement){
            count++;
        }
    }

    //step3 placing at correctIndex
    int correctIndex=s+count;
    swap(arr[correctIndex],arr[pivotIndex]);
    pivotIndex=correctIndex;

    //left mein chote right mein bade elements ko rakhna hai
    int i=s;
    int j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }
        //if condition doesn't fulfil you found the elements to swap
        //else no need to swap leave as it is
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;

}
void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);
    
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[]={2,1,3,5,6,6,6,6,90};
    int n=9;
    int s=0;
    int e=n-1;
    quickSort(arr,s,e);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}