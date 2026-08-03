#include<iostream>
#include<queue>
#include<vector>
using namespace std;

class Solution{
    public:
    void bfs(vector<vector<int>> graph){
        int n = graph.size();
        int m= graph[0].size();
        queue<int> q;
        vector<int> visited(m,0);
        q.push(0);
        visited[0]=1;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cout<<node<<" ";
            for(int i=0; i<m; i++){
                if(graph[node][i]==1 && visited[i]==0){
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
};

   int main(){
    Solution obj;
    int n, m;
    cin>>n>>m;
    vector<vector<int>> graph(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
          cin>>graph[i][j];
        }
    }
     obj.bfs(graph);
     return 0;
   }