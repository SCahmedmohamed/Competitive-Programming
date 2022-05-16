#include <bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;
int n , F[N];
int main() {
    Scorpion
    cin >> n;
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= n; i++){
        F[i] = F[i-1] + F[i-2];
    }
    cout << F[n] << el;
    return 0;
}
