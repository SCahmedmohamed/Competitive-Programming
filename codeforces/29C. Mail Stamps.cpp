// By Ahmed Mohamed Ibrahim . May/01/2022 04:01
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int n;
map<int,vector<int>> g;
vector<int> ans;
map<int,bool>vis;

void dfs(int node){
    vis[node] = true;
    ans.push_back(node);
    for(int neg : g[node]){
        if(!vis[neg])
            dfs(neg);
    }
}

int main(){
    Scorpion
    cin >> n;
    for(int i = 0 ; i < n; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(auto i : g){
        if(i.ss.size() == 1){
            dfs(i.ff);
            break;
        }
    }

    for(auto o : ans){
        cout << o << " ";
    }
    return 0;
}
