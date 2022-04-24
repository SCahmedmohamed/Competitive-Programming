// By Ahmed Mohamed Ibrahim . 2022-04-24 13:39:36	
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n , m , d[N] , x , y ,t;
vector<pair<int,int>> g[N];
void init(){
    for(int i = 1; i <= n; i++){
        g[i].clear();
    }
}
int dij(int source , int dis){
    priority_queue<pair<int,int>> q;
    q.push({0,source});
    for(int i = 1; i <= n; i++)
        d[i] = 1e9;
    d[source] = 0;
    while(!q.empty()){
        int cost = -q.top().ff;
        int node = q.top().ss;
        q.pop();
        if(d[node] < cost)
            continue;
        if(node == dis)
        break;
        for(auto neg : g[node]){
            int ncost = neg.ss + cost;
            if(ncost < d[neg.ff]){
                d[neg.ff] = ncost;
                q.push({-d[neg.ff],neg.ff});
            }
        }
    }
    return d[dis];
}

int main(){
    Scorpion
    cin >> t;
    while(t--){
        cin >> n >> m >> x >> y;
            init(); // 
        for(int i = 0; i < m; i++){
            int u , v, w;
            cin >> u >> v >> w;
            g[u].push_back({v,w});
            g[v].push_back({u,w});
        }
        int dis = dij(x,y);
        if(dis != 1e9)
            cout << dis << el;
        else cout << "NONE" << el;
    }
    return 0;
}
