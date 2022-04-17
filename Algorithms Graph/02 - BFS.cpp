#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define ff first
#define ss second
const int N = 1e5;
int n , m;
bool vis[N];
vector<int> g[N];
void bfs(int src){
  queue<int> q;
  q.push(src);
  vis[src] = true;
  while(!q.empty()){
  int cur = q.front();
  q.pop();
  }
}

int main(){
  bool res = true;
  cin >> n >> m;
  for(int i = 0; i < m; i++){
   int u , v;
   cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  for(int i = 1; i <= n; i++){
   bfs(i);
    if(!vis[i]) res = false; 
  }
  if(res) cout << "YES" << el;
  else cout << "NO" << el;
  return 0;
}
