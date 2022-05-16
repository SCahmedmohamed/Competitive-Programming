// By Ahmed Mohamed Ibrahim . May/10/2022 22:24
#include <bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;
int t , n , a[N] , cnt;
int main() {
    Scorpion
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a,a+n);
        int first = a[0];
        for(int i = 1; i < n; i++){
            cnt += a[i] - first;
        }
        cout << cnt << el;
    }
    return 0;
}
