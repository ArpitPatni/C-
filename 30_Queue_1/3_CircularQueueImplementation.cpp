#include<iostream>
using namespace std;
class CQueue{
    public:
    int*arr;
    int size;
    int front;
    int rear;
    
    CQueue(int size){
        this->size=size;
            arr=new int[size];
            front=-1;
            rear=-1;
    }
    void push(int data){
        //Queue full
        //Single element->first element
        //circular nature
        //normal flow
        if((front==0 && rear==size-1)){
            cout<<"Q is full can't insert"<<endl;
        }else if(front==-1){
            front=rear=0;
            arr[rear]=data;
        }else if(rear=size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }else{
            rear++;
            arr[rear]=data;
        }
       
    }
    void pop(){
        //empty check
        //first element
        //circular nature
        //normal flow
        if(front==-1){
            cout<<"Q is empty,can't pop"<<endl;
        }else if(front==rear){
            arr[front]=-1;
            front=-1;
            rear=-1;
        }else if(front==size-1){
            front=0;
        }else{
            front++;
        }
    }



};
int main(){
CQueue q(10);
q.push(5);
q.push(15);
q.push(25);
q.push(35);


}