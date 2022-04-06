// By Ahmed Mohamed Ibrahim . 2022-04-06 21:54:16
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e4 + 5;
int n, m, col[N];
bool good = true;
vector<int> g[N];
void dfs(int node, int cur) {
    col[node] = cur;
    for(int neg : g[node]) {
        int nxt = !cur;
        if(col[neg] == -1) {
            dfs(neg, nxt);
        } else if(col[neg] != nxt) {
            good = false;
        }
    }
}
void init() {
    for(int i = 1;i <= n;i++) {
        g[i].clear();
        col[i] = -1;
    }
    good = true;
}
int main(){
    Scorpion
    int t;
    cin >> t;
    for(int tc = 1;tc <= t;tc++) {
        cin >> n >> m;
        init();
        for(int i = 0;i < m;i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        for(int i = 1;i <= n;i++) {
            if(col[i] == -1)
                dfs(i, 0);
        }
        cout << "Scenario #" << tc << ":\n";
        good ? cout << "No suspicious bugs found!\n" : cout << "Suspicious bugs found!\n";
    }
    return 0;
} 
