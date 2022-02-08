// By Ahmed Mohamed Ibrahim . Dec/20/2021 19:32
#include<bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ft float
#define ld long double
#define sfa(x) ((int)x.size())
#define _3m_Scorpion  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    ll n, ans = 0;
    cin >> n;
    ans +=(ll)sqrt(n);
    ll t = (ll)cbrt(n);
    ans += t;
    ans -=(ll)sqrt(t);
    cout << ans << el;
}
int main () {
                _3m_Scorpion
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        solve();
    }
return 0;
 
}
