// By Ahmed Mohamed Ibrahim 
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int N = 1e5 + 5;
int tc , n , m;
vector<int> g[N];
bool vis[N];

int dfs(int node){
    int cnt = 0;
    vis[node] = true;
    for(int neg : g[node]){
        if(!vis[neg]){
            cnt += dfs(neg);
        }
    }
    return cnt + 1;
}

void init(){
    for(int i = 1; i <= n; i++){
        g[i].clear();
        vis[i] = false;
    }
}

int main(){
    Scorpion
    cin >> tc;
    while(tc--){
        init();
        cin >> n >> m;
        for(int i = 0; i < m; i++){
            int u , v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                ans = max(ans,dfs(i));
            }
        }
        cout << ans << el;
    }
    return 0;
}
