// By Ahmed Mohamed Ibrahim . Apr/15/2022 23:14
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
int n ,par[N], sz[N] , components;
vector<pair<int,int>> open , close;
int find(int node){
    if(par[node] == node) {
        return node;
    }
    return par[node] = find(par[node]);
}
bool join(int u , int v){
    u = find(u);
    v = find(v);
    if(u == v) return false;

    if(sz[u] < sz[v]){
        swap(u,v);
    }
        par[v] = u;
        sz[u] += sz[v];
        components--;
        return true;
}
int main(){
    Scorpion
    cin >> n;
    for(int i = 1; i <= n; i++){
        par[i] = i;
        sz[i] = 1;
    }
    for(int i = 1; i < n; i++){
        int u , v;
        cin >> u >> v;
        if(!join(u,v)){
            close.push_back({u,v});
        }

    }
    for(int i = 1; i <= n; i++){
        for(int j =1; j <= n; j++){
            if(join(i,j)) open.push_back({i,j});
        }
    }
    cout << close.size() << el;
    for(int i =0 ; i < close.size();i++){
        cout << close[i].ff << " " << close[i].ss << " " << open[i].ff << " " << open[i].ss << el;
    }
    return 0;
}
