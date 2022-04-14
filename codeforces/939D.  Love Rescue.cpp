// By Ahmed Mohamed Ibrahim . Apr/14/2022 20:50
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5;
int n ,par[N], sz[N];
string s , t;
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
    return true;
}
int main(){
    Scorpion
    cin >> n >> s >> t;
    fill(sz+1, sz + n+27 ,1);
    iota(par , par + n+27 ,0);
    vector<pair<char,char>> ans;
    for(int i = 0; i < n; i++){
        int u = s[i] - 'a';
        int v = t[i] - 'a';
        if(join(u,v)){
            ans.push_back({s[i],t[i]});
        }
    }
    cout << ans.size() << el;
    for(auto o : ans){
        cout << o.ff << " " << o.ss << el;
    }
    return 0;
}
