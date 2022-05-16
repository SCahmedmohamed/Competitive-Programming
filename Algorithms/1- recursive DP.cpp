#include <bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;
int F[N];

int fibo(int n){
    if(n <= 1) return n;

    if(~F[n]) return F[n];

    return F[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    Scorpion
    memset(F,-1,sizeof F);
    cout << fibo(8) << el;
    return 0;
}
