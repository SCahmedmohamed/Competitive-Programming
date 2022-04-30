// By Ahmed Mohamed Ibrahim . May/01/2022 00:19
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n , r1 , r2 , ans[N];
vector<int>g[N];
void dfs(int node , int par){
    ans[node] = par;
    for(auto neg : g[node]){
        if(neg != par)
            dfs(neg,node);
    }
}

int main(){
    Scorpion
    cin >> n >> r1 >> r2;
    for(int i =1; i <= n; i++){
        if(i == r1)
            continue;
        int p;
        cin >> p;
        g[p].push_back(i);
        g[i].push_back(p);
    }
    dfs(r2,r2);
    for(int i = 1; i <= n; i++){
        if(i != r2)
            cout << ans[i] << " ";
    }
    return 0;
}





