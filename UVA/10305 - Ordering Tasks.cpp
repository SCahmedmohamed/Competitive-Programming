// By Ahmed Mohamed Ibrahim . 2022-04-29 21:11:14
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n , m;
vector<int>g[N] , order;
bool vis[N];

void dfs(int node){
    vis[node] = true;
    for(auto neg : g[node]){
        if(!vis[neg])
            dfs(neg);
    }
    order.push_back(node);
}

void init(){
    for(int i = 1;i <= n; i++){
        g[i].clear();
        vis[i] = false;
    }
    order.clear();
}

int main(){
    Scorpion
    while(1){
        cin >> n >> m;
        if(n == 0 && m == 0)
            break;
        init();
        for(int i = 0 ; i < m ; i++){
            int u , v;
            cin >> u >> v;
            g[u].push_back(v);
        }
        for(int i = 1; i <= n; i++){
            if(!vis[i]){
                dfs(i);
            }
        }
        reverse(order.begin(),order.end());
        for(auto o : order){
            cout << o << " ";
        }
        cout << el;
    }
    return 0;
}





