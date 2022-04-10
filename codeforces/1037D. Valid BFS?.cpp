// By Ahmed Mohamed Ibrahim . Apr/10/2022 22:20
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e5 + 5;
int n , ord[N] , a[N];
vector<int> g[N];
bool vis[N];
bool check(int x , int y){
    return ord[x] < ord[y];
}
int main(){
    Scorpion
    cin >> n;
    for(int i = 1; i < n; i++){
        int u , v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i = 1; i<= n;i++){
        cin >> a[i];
        ord[a[i]] = i;
    }
    for(int i = 1; i <= n; i++){
        sort(g[i].begin(),g[i].end(),check);
    }
    queue<int>q;
    q.push(1);
    vis[1] = true;
    int ind = 1;
    while(!q.empty()){
        int cur = q.front();
        q.pop();
        if(cur != a[ind]){
            return cout << "NO",0;
        }
        ind++;
        for(auto neg : g[cur]){
            if(!vis[neg]){
                vis[neg] = true;
                q.push(neg);
            }
        }
    }
    cout << "YES";
    return 0;
}
