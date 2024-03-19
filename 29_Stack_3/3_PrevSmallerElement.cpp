#include<iostream>
#include<stack>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);

    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
  
    //left to right move for prev smaller

    for(int i=0;i<v.size();i++){
        int curr=v[i];
        while(s.top()>=curr){
            //jab tak pop karte rahenge jab tak chota element nai milega
            s.pop();
        }
        //chota element milgaya->store in ans
        ans[i]=s.top();
        //push krdo current element ko
        s.push(curr);
    }

    cout<<"Printing"<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}