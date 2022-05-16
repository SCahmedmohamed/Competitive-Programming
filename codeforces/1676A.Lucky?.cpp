// By Ahmed Mohamed Ibrahim . May/10/2022 22:13
#include <bits/stdc++.h>
using namespace std;
#define el endl
#define ll long long
#define ff first
#define ss second
#define Scorpion ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N = 1e5 + 5 , mod = 1e9 + 7;
int t;
string s;
int main() {
    Scorpion
    cin >> t;
    while(t--){
        cin >> s;
        if(s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
            cout << "YES" << el;
        else cout << "NO" << el;
    }
    return 0;
}
