#include<iostream>
#include<string.h>
using namespace std;

int getLength(char ch[100]){
    int length=0;
    int i=0;
    while(ch[i]!='\0'){
        length++;
        i++;
    }
    return length;
}
int main(){
    char ch[100];
    cin>>ch;

    int ans=getLength(ch);

    cout<<"Length of the string is "<<ans<<endl;
    cout<<"Length of the string using inbuild fucntion "<<strlen(ch)<<endl;
    return 0;
}