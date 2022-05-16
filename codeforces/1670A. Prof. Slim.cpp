// By Ahmed Mohamed Ibrahim . May/06/2022 18:41
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;
int n , a[N] , b[N];

void solve(){
    cin >> n;
    vector<int>v(n);
    int cnt = 0;
    for(int i = 0 ; i < n; i++){
        cin >> v[i];
        if(v[i] < 0) cnt++;
    }
    for(int i = 0; i < n; i++){
        if(cnt > 0){
            v[i] = 0-abs(v[i]);
            cnt--;
        }else{
            v[i] = abs(v[i]);
        }
    }
    for(int i = 0; i < n-1; i++){
        if(v[i] > v[i+1]){
            cout << "NO" << el;
            return;
        }
    }
    cout << "YES" << el;
    return;
}
int main(){
    Scorpion
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}
