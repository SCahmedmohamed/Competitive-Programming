// By Ahmed Mohamed Ibrahim . Apr/18/2022 23:52
#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define el endl
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 2e6 + 5;
int n, m ,d[N];

int main(){
    Scorpion
    int x;
    cin >> x;
    if(x<=10 ||x > 21){
        cout << 0;
        return 0;
    }
    if(x == 20) cout << 15;
        else cout << 4;
    return 0;
}
