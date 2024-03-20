#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseQueue(queue<int>&q){
    if(q.empty()){
        return;
    }
    int element=q.front();
    q.pop();
    reverseQueue(q);
    q.push(element);
}
void reverseK(queue<int>&q,int k){
    stack<int>st;
    int count=0;
    int n=q.size();
    //Step A-Push k elements into stack
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        st.push(temp);
        count++;
        if(count==k){
            break;
        }
    }

    //Step B-stack to Queue again

    while(!st.empty()){
        int element=st.top();
        st.pop();
        q.push(element);
    }
    count=0;
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k){
            break;
        }
    }


}
int main(){
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);

    // reverseQueue(q);
    reverseK(q,3);

    while(!q.empty()){
        cout<<q.front()<< " ";
        q.pop();
    }
    cout<<endl;
}