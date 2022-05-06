// By Ahmed Mohamed Ibrahim . May/06/2022 03:00
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 5e5  + 5;
int t , n , a[N];

int solve(){
    int cnt = 0;
    cin >> n;
    for(int i = 1;i <= n; i++) cin >> a[i];
    for(int i = n-1; i >= 1; i--){
        while(a[i] && a[i] >= a[i+1]){
            a[i] /= 2;
            cnt++;
        }
        if(a[i] >= a[i+1]) return -1;

    }
    return cnt;
}
int main(){
    Scorpion
    cin >> t;
    while(t--){
        int mm = solve();
        cout << mm << el;
    }
    return 0;
}
