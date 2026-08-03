#include<iostream>
#include<vector>
using namespace std;

class Solution{
 public:
    void dfs(vector<vector<int>>& adj,vector<int>& visited,int node){
         visited[node]=1;
         cout<<node<<" ";
         for(int x : adj[node]){
            if(!visited[x]){
                dfs(adj,visited,x);
            }
         }
    }
};

  int main(){
    Solution obj;
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> visited(n,0);
    int start;
    cin>>start;

    obj.dfs(adj,visited,start);
    return 0;
  }