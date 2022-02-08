// By Ahmed Mohamed Ibrahim . Dec/20/2021 19:19
#include<bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ft float
#define ld long double
#define sfa(x) ((int)x.size())
#define _3m_Scorpion  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve(){
    string s;
    cin >> s;
    if(sfa(s)%2 != 0) cout << "NO" << el;
    else{
        ll p = sfa(s)/2;
        string ans = "YES";
        for(int i = 0; i < p;i++){
            if(s[i] != s[i+p]){
                ans = "NO";
                break;
            }
        }
        cout << ans << el;
    }
    return;
}
int main () {
                _3m_Scorpion
    int t;
    cin >> t;
    for(int i = 1; i <=t; i++){
        solve();
    }
return 0;
 
}
