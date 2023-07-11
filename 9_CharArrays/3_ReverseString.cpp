#include<iostream>
#include<string.h>
using namespace std;
void getReverse(char ch[]){
    int i=0;
    int j=strlen(ch)-1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cin>>ch;

    cout<<"Before Reverse "<<ch<<endl;
    getReverse(ch);
    cout<<"After reverse "<<ch<<endl;
    return 0;
}