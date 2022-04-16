// By Ahmed Mohamed Ibrahim . Apr/16/2022 11:10
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
const int mod = 1e9 + 7;
int n , k ,par[N], sz[N] , components;
int fp(int x , int y){
    if(y == 0) return 1;
    int res = fp(x , y / 2);
    res = (1ll * res * res) % mod;
    if(y & 1)
        res = (1ll * res * x) % mod;
    return res;
}
int find(int node){
    if(par[node] == node) {
        return node;
    }
    return par[node] = find(par[node]);
}
void join(int u , int v){
    u = find(u);
    v = find(v);
    if(u == v) return;

    if(sz[u] < sz[v]){
        swap(u,v);
    }
        par[v] = u;
        sz[u] += sz[v];
        components--;
}
int main(){
    Scorpion
    cin >> n >> k;
    fill(sz , sz + n+1 ,1);
    iota(par , par + n+1 ,0);
    for(int i = 1; i < n; i++){
        int u , v , x;
        cin >> u >> v >> x;
        if(x == 0){
            join(u,v);
        }
    }
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if(find(i) == i){
            sum = (sum + fp(sz[i], k)) % mod;

        }
    }
    int ans = (fp(n,k) - sum) % mod;
    if(ans  < 0) ans += mod;
    cout << ans;
    return 0;
}
