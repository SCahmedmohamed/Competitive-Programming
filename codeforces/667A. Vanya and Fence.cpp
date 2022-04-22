#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mode = 1e9 + 7;
int n , m, ans;
int main(){
    Scorpion
     cin >> n >> m;
     for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a <= m) ans++;
        else ans += 2;
     }
     cout << ans << el;
    return 0;
}
