#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n , m , d[N];
vector<pair<int,int>> g[N];

void dij(int source){
    priority_queue<pair<int,int>> q;
    // ff = cost the i calculated , ss = node which i will go to it
    q.push({0,source});
    // dis = 0 . source (the node which i will start at)
    for(int i = 1; i <= n; i++)
        d[i] = 1e9;
        // to get the lower 
    d[source] = 0;
    // as i stand at the source
    while(!q.empty()){
        int cost = q.top().ff;
        int node = q.top().ss;
        q.pop();
        if(d[node] < cost) // if dis to the node is less than the cost form cur to the node 
            // if i get lower path to the same node
            continue;
        for(auto neg : g[node]){
            int ncost = neg.ss + cost;
            // 
            if(ncost < d[neg.ff]){ // 
                d[neg.ff] = ncost;
                //
                q.push({d[neg.ff],neg.ff});
                //  
            }
        }
    }
}

int main(){
    Scorpion
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u , v, w;
        cin >> u >> v >> w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dij(1);
    for(int i = 1; i <= n; i++){
        cout << d[i] << " ";
    }
    return 0;
}
