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
    cin >> n;
  /*  for(int i = 1 ; i <= n; i++){
      35-  par[i] = i
      37  sz[i] = 1;
    } */
    fill(sz , sz + n+1 ,1);
    // sz[i] = 1 
    iota(par , par + n+1 ,0);
    // par[i] = i; 0 +=1
    return 0;
}