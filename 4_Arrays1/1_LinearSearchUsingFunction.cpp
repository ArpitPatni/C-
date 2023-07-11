#include<iostream>
using namespace std;

bool find(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[]={1,3,5,7,8};
    int size=5;
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"FOUND"<<endl;
    }else{
        cout<<"NOT FOUND"<<endl;
    }
    return 0;
}