// By Ahmed Mohamed Ibrahim . Apr/06/2022 22:49
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int n , m ,par[N];
bool vis[N];
vector<int> g[N];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        for(auto neg : g[cur]){
            if(!vis[neg]){
                vis[neg] = true;
                q.push(neg);
            }
        }
    }
}
int main(){
    Scorpion
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    bfs(1);
    bool torf = true;
    if(n != m) torf = false;
    for(int i = 1; i <= n; i++){
        if(!vis[i]) torf = false;
    }
    if(torf){
        cout << "FHTAGN!" << el;
    } else cout << "NO" << el;
    return 0;
}
