// By Ahmed Mohamed Ibrahim . Dec/16/2021 20:18
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    Scorpion
    ll t , n;
    cin >> t;
    while(t--){
    cin >> n;
    if(n & (n-1)){
        cout << "YES" << el;
    } else cout << "NO" << el;
    }
    return 0;
}
