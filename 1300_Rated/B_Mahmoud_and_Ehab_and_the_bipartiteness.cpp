#include<bits/stdc++.h>
using namespace std;
int red=0;
int white=0;
void dfs(int node,
    int color,
    vector<int>&visited,
    vector<vector<int>>&adj){
        visited[node]++;
        if(color==1)red++;
        else white++;

        for(int nei:adj[node]){
            if(!visited[nei]){
                dfs(nei,1-color,visited,adj);
            }
        }

        return ;
    }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<vector<int>>adj(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>visited(n+1,0);
    dfs(1,0,visited,adj);
    cout<<1LL*red*white-(n-1)<<endl;
    red=0;
    white=0;

    return 0;
}