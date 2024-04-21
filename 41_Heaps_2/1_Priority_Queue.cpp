#include<iostream>
#include<queue>
using namespace std;
int main(){
    //Type of max-heap
    priority_queue<int>pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);
    cout<<"Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Top element "<<pq.top()<<endl;
    pq.pop();
    cout<<"Size "<<pq.size()<<endl;
    if(pq.empty()){
        cout<<"EMPTY"<<endl;
    }
}