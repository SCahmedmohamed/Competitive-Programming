// By Ahmed Mohamed Ibrahim . Mar/26/2022 20:35
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
vector<int>g[N];
int c[N] , mn;
bool vis[N];
void dfs(int node){
    vis[node] = true;
    mn = min(mn,c[node]);
    for(int neg : g[node]){
        if(vis[neg] == false)
 
        dfs(neg);
    }
}
 
int main(){
    Scorpion
    int n , m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 0; i < m; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll tot = 0;
    for(int i = 1; i <= n; i++){
        if(vis[i] == false){
            mn = INT_MAX;
            dfs(i);
            tot += mn;
        }
    }
    cout << tot << el;
 
    return 0;
}
