#include<iostream>
using namespace std;
void dfs(adj[100][100],visited[100],int sv,int V){
    cout<<sv;
    visited[sv]=1;
    for(int i=0;i<V;i++){
        if(adj[sv][i]==1&&visited[i]==0){
            dfs(adj,visited,V,i);
        }
    }
}
int main(){
    int E;
    int V;
    cin>>E>>V;
    int adj[100][100];
    int visited[100];
    for(int i=0;i<E;i++){
        int s;
        int d;
        cin>>s>>d;
        adj[s][d]=1;
    }
}
