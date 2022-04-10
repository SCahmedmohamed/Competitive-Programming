// By Ahmed Mohamed Ibrahim
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
int n, m, vis[N];
bool good;
vector<int> g[N], order;

void dfs(int node){
    vis[node] = 1;
    for(int neg : g[node]){
        if(vis[neg] == 0) 
            dfs(neg);
        else if(vis[neg] == 1) 
                good = false;
    }
    order.push_back(node);
    vis[node] = 2;
}

void init(){
    order.clear();
    good = true;
    for(int i = 1; i <= n;i++){
         g[i].clear();
         vis[i] = 0;
    }
}
int main(){
    Scorpion
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        init();
        for(int i = 0; i < m; i++){
            int u , v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        if(!good){
            cout << "IMPOSSIBLE" << el;
            continue;
        }
    
    reverse(order.begin(),order.end());
    for(int i : order)
        cout << i << el;
    }
    return 0;
}
