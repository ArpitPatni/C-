#include<iostream>
using namespace std;
class Heap{
    public:
    int arr[101];
    int size;
    Heap(){
        size=0;
    }
    void insert(int value){
        //Value insert kro end me
        size=size+1;
        int index=size;
        arr[index]=value;
        while(index>1){
            int parentIndex=index/2;
            if(arr[index]>parentIndex){
                swap(arr[index],parentIndex);
                index=parentIndex;
            }else{
                break;
            }
        }
    }

    int deleteValue(){
        int ans=arr[1];
        //replace root node with last node
        arr[1]=arr[size];
        size--;

        //place toot ka data onits correct position

        int index=1;
        while(index<size){
            int left=2*index;
            int right=2*index+1;
            int largest=index;
            if(left<size && arr[largest]<arr[left]){
                largest=left;
            }
            if(right<size && arr[largest]<arr[right]){
                largest=right;
            }
            if(largest==index){
                //value is at correct position
                return;
            }else{
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
        return ans;

    }
};
int main(){

}