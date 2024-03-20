#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}
