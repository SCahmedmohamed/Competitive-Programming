// By Ahmed Mohamed Ibrahim . Apr/10/2022 22:21
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define lli long long int
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e4 + 5;
int n , m ,d[N], k;
bool vis[N];
vector<int> g[N];
int main(){
    Scorpion
    cin >> n >> m;
    queue<int> q;
    q.push(n);
    memset(d, -1, sizeof d);
    d[n] = 0;
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        if(cur == m)
            break;
        if(cur * 2 < 2 * m && d[cur * 2] == -1) {
            d[cur * 2] = d[cur] + 1;
            q.push(cur * 2);
        }
        if(cur - 1 > 0 && d[cur - 1] == -1) {
            d[cur - 1] = d[cur] + 1;
            q.push(cur - 1);
        }
    }
    cout << d[m];
    return 0;
}
