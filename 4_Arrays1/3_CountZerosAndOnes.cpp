#include<iostream>
using namespace std;
int main(){
    int arr[]={1,0,1,1,0,0,1};
    int size=7;

    int noOfOnes=0,noOfZeros=0;

    for(int i=0;i<size;i++){
        if(arr[i]==1){
            noOfOnes++;
        }
        if(arr[i]==0){
            noOfZeros++;
        }
    }

    cout<<"No of ones "<<noOfOnes<<endl;
    cout<<"No of Zeros "<<noOfZeros<<endl;
    return 0;

}