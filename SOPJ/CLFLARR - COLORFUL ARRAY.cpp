// By Ahmed Mohamed Ibrahim . 2022-04-16 16:31:23
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
int n , q ,par[N], sz[N] , l[N], r[N] , c[N] , mx[N] , ans[N];
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
        mx[u] = max(mx[u],mx[v]);
}
int main(){
    Scorpion
    cin >> n >> q;
    for(int i = 1; i <= n + 1; i++){
        sz[i] = 1;
        mx[i] = i;
        par[i] = i;
    }
    for(int i = 0; i < q; i++){
        cin >> l[i] >> r[i] >> c[i];
    }
    for(int i = q - 1; i >= 0; i--){
        int cur = l[i];
        cur = mx[find(cur)];
        while(cur <= r[i]){
            ans[cur] = c[i];
            join(cur,cur+1);
            cur = mx[find(cur)];
        }
    }
    for(int i = 1; i <= n; i++){
        cout << ans[i] << el;
    }
    return 0;
}
