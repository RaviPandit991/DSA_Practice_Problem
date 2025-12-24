#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<vector<int>>&adjlist,vector<bool>&visited){
    visited[node] = true;
    cout<<node<<" ";
    for(auto& x: adjlist[node]){
        if(!visited[x]){
            dfs(x,adjlist,visited);
        }
    }
}
int main(){
    int v = 6;
    vector<vector<int>>connectiom = {{1,2},{1,3},{1,4},{1,0},{3,5},{3,6}};
    vector<vector<int>>adjlist(v+1);
    for(auto& x: connectiom){
        int u = x[0];
        int v = x[1];
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    vector<bool>visited(v+1,false);
    dfs(1,adjlist,visited);
}