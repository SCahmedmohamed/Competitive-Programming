#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
int n , m;
vector<int>g[N];
bool vis[N];
void dfs(int node){
    vis[node] = true;
    for(int neg : g[node]){
        if(!vis[neg]){
            dfs(neg);
        }
    }
}
int main(){
    Scorpion
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u ,v;
        g[u].push_back(v);
        g[v].push_back(u);
        // make the graph nodes
    }
    dfs(1);
  // simple start
    return 0;
}
