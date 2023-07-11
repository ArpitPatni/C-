#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int size=5;
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    bool flag=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            flag=1;
        }
    }

    if(flag){
        cout<<"Element FOUND"<<endl;
    }else{
        cout<<"Element NOT FOUND"<<endl;
    }
    return 0;
}