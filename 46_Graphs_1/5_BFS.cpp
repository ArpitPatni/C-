#include<iostream>
#include<unordered_map>
#include<queue>
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
    void bfs(T src,unordered_map<int,bool>&visited){
        queue<T>q;
    
        q.push(src);
        visited[src]=true;
        while(!q.empty()){
            int frontNode=q.front();
            q.pop();
            cout<<frontNode<<" ";

            //insert neghbours
            for(auto neighbour:adjList[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]=true;
                }
            }
        }
    }
    void dfs(T src,unordered_map<int,bool>&visited){
        cout<<src<<" ";
        visited[src]=true;
        for(auto neighbour:adjList[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }
};
int main(){
    graph<int> g;
    int n=5;
    cout<<endl;
    //run a for loop for all nodes for disconnected graphs
    unordered_map<int,bool>visited;
    unordered_map<int,bool>visited2;
    g.addEdge(0,1,0);
    g.addEdge(1,3,0);
    g.addEdge(0,2,0);
    g.addEdge(2,4,0);
    cout<<"Printing BFS "<<endl;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.bfs(i,visited);
        }
    }
    cout<<endl;
    cout<<"Printing DFS"<<endl;
    for(int i=0;i<n;i++){
        if(!visited2[i]){
            g.dfs(i,visited2);
        }
    }
}