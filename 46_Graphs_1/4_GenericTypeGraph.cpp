#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
template<typename T>
class graph{
    public:
    //ek integrer k corresponding bhot saare neighbour ho sakte hai
    unordered_map<T,list<T>>adjList;

    void addEdge(T u,T v,bool direction){
        //direction == 0 ->undirected graph
        //direction == 1 ->Directed graph
        //create an edge from u to v
        adjList[u].push_back(v);
        if(direction==0){
            //undirected edge
            //create an edge from v to u
            adjList[v].push_back(u);
        }
    }
    void printAdjList(){
        for(auto node:adjList){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<",";
            }
            cout<<endl;
        }
    }
};
int main(){
    graph<char> g;
    g.addEdge('a','b',0);
    g.addEdge('b','c',0);
    g.addEdge('a','c',0);
    g.printAdjList();
}