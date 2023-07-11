#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int> arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the size of Array"<<endl;
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements in an array"<<endl;

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    int uniquElement=findUnique(arr);

    cout<<"Unique element is "<<uniquElement<<endl;
    return 0;


}