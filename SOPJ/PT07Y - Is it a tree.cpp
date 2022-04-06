// By Ahmed Mohamed Ibrahim . 2022-03-22 08:44:12
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5;
int n , m;
bool vis[N];
vector<int>g[N];
void dfs(int node , int par){
    vis[node] = true;
    for(int neg : g[node]){
        if(neg == par) continue;
        if(vis[neg]){
            cout << "NO";
            exit(0);
        }
        dfs(neg,node);
    }
}
int main(){
    Scorpion
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1,-1);
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            cout << "NO" << el;
            return 0;
        }
    }
    cout << "YES" << el;
    return 0;
}
