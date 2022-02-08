// By Ahmed Mohamed Ibrahim . Dec/13/2021 21:19
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ft float
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    Scorpion
    ll n , a , b;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if((b*b) <= a && (a+b) % 2 == 0) cout << "YES" << el;
        else cout << "NO" << el;
    }
return 0;
}
