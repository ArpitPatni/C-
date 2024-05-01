#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;
class graph{
    public:
    //ek integrer k corresponding bhot saare neighbour ho sakte hai
    unordered_map<int,list<pair<int,int>>>adjList;

    void addEdge(int u,int v,int weight,bool direction){
        //direction == 0 ->undirected graph
        //direction == 1 ->Directed graph
        //create an edge from u to v
        adjList[u].push_back({v,weight});
        if(direction==0){
            //undirected edge
            //create an edge from v to u
            adjList[v].push_back({u,weight});
        }
    }
    void printAdjList(){
        for(auto node:adjList){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<"{"<<neighbour.first<<","<<neighbour.second<<"},";
            }
            cout<<endl;
        }
    }
};
int main(){
    graph g;
    g.addEdge(0,1,5,1);
    g.addEdge(1,2,8,1);
    g.addEdge(0,2,6,1);
    cout<<endl;
    g.printAdjList();
}