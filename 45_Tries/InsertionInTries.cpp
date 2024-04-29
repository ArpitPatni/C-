#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode*children[26];
    bool isTerminal;

    TrieNode(char d){
            this->data=d;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            this->isTerminal=false;
    }
};
void insertWord(TrieNode*root,string word){

}
int main(){
    TrieNode*root=new TrieNode('-');
    insertWord(root,"coding");
}