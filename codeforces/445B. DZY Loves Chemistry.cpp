// By Ahmed Mohamed Ibrahim . Mar/26/2022 13:59
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
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
    for(int i = 0; i < m ; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll ans = 1 , cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
    }
    for(int i = 1; i <= n - cnt;i++){
        ans*=2;
    }
    cout << ans << el;
    return 0;
}
